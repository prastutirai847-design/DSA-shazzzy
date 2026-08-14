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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       

        struct cmp{bool operator()(ListNode* a,ListNode*b)
        {
            return a->val>b->val;
        }
        };
        priority_queue<ListNode*,vector<ListNode*>,cmp>pq;
      //  ListNode* first=node;
       for (ListNode* first : lists) {
    if (first != NULL)
        pq.push({first});
}
ListNode dummy;
ListNode* tail = &dummy;

        while(!pq.empty()){
            ListNode* p=pq.top();
            pq.pop();
            tail->next = p;
tail = p;
           
            if (p->next != NULL)
             pq.push(p->next);
          
        }
        return  dummy.next;

        
    }
};