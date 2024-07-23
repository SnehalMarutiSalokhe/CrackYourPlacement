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
    ListNode* reverse(ListNode* head)
    {
        if(!head || !head->next) return head;

        ListNode* newHead = reverse(head->next);

        ListNode* front = head->next;

        front->next = head;
        head->next = NULL;

        return newHead;
    }
public:
    int getDecimalValue(ListNode* head) {
        int pow=1;
        int ans=0;
        head = reverse(head);
        while(head)
        {
            ans += ((head->val)*pow);
            head=head->next;
            pow*=2;
        }
        head = reverse(head);
        return ans;
    }
};