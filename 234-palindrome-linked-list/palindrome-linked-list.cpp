/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
          if(head == NULL || head->next == NULL)
    return true;

        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
           fast= fast->next;
          
        }
        if(fast != NULL){
    // Odd length hai
    slow = slow->next;
}
      
       ListNode* cur= slow;
       ListNode* fut=NULL;
       ListNode* prev=NULL;
       while(cur){
        fut=cur->next;
        cur->next=prev;
        prev=cur;
        cur=fut;
       }
       ListNode* first=head;
       ListNode* sec=prev;
       
       while(sec){
        if(first->val!=sec->val){
            return false;
             }  
        first=first->next;
        sec=sec->next;
   
       }
       return true;   
    }
};