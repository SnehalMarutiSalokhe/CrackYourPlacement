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
    ListNode* reverse (ListNode* head)
    {
        if(head == NULL || head->next == NULL) return head;

        ListNode* newHead = reverse (head->next);

        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;

        return newHead;
    }

    bool isPalindrome(ListNode* head) {
        
    if(head == NULL || head->next == NULL) return true;
        
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* newHead = reverse (slow->next);
    ListNode* first = head; ListNode* second = newHead;

    while(second)
    {
        if(first->val != second->val) return false;

        first = first->next;
        second= second->next;
    }

    reverse (newHead);


    return true;


    }
};