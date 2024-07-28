#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int sz=q.size();
        for(int i=1;i<sz;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
       auto valu= q.front();
       q.pop();
       return valu;
    }
    
    int top() {
        auto temp = q.front();
        
       return temp;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */