#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}


 /*** Definition for singly-linked list.*/
  struct ListNode {
     int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
     ListNode* slow = head;
     ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {     
            slow=slow->next;
            fast =fast->next->next;
            
            if(fast == slow) return  true;

        }

        return false;
    }
};