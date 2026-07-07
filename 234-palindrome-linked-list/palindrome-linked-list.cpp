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
         ListNode* slow=head;ListNode* fast=head;
     while (fast->next != NULL && fast->next->next != NULL){
      slow=  slow->next;
      fast=fast->next;
       fast=fast->next;
     }
    ListNode *curr=slow->next;
    ListNode* prev=NULL;
    ListNode* fut =NULL;
    while(curr){
        fut=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fut;
    }
    ListNode* first=head;
    ListNode* sec=prev;
    while(first!=NULL && sec){
        if(first->val==sec->val){
            first=first->next;
            sec=sec->next;
        }
        else{
            return false;
        }
    }
    return true;
    
        
    }
};