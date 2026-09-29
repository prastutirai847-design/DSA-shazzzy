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
    ListNode* rotateRight(ListNode* head, int k) {
        int n =1;
        if(head == NULL || head->next == NULL)
    return head;
        ListNode* first=head->next;
        ListNode* prev=head;
        while(first->next!=NULL){
            first=first->next;
            
            prev=prev->next;
            n++;
        }
        
        k=k%(n+1);
        while(k!=0){
            first->next=head;
            prev->next=NULL;
            head = first;
            k--;
            
             prev = head;
    first = head->next;

    while(first->next != NULL){
        first = first->next;
        prev = prev->next;
    }


        }
        return head;
    }
};