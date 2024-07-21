#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int count = 0;
                for (int k = i - 1; k <= i + 1; k++) {
                    for (int h = j - 1; h <= j + 1; h++) {
                        if (k >= 0 && k < rows && h >= 0 && h < cols && !(k == i && h == j)) {
                            if (board[k][h] == 1 || board[k][h] == 2) {
                                count++;
                            }
                        }
                    }
                }
                if (board[i][j] == 0 && count == 3) {
                    board[i][j] = -1;
                } else if ((count < 2 || count > 3) && board[i][j] == 1) {
                    board[i][j] = 2;
                }
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (board[i][j] == -1) {
                    board[i][j] = 1;
                } else if (board[i][j] == 2) {
                    board[i][j] = 0;
                }
            }
        }
    }
};