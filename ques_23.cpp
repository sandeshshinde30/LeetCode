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
        priority_queue<int,vector<int>,greater<int>> pq;

        for(int i=0;i<lists.size();i++)
        {
             ListNode* tmp = lists[i];
            
            while(tmp!=NULL)
            {
               pq.push(tmp->val);
                tmp = tmp->next; 
            }   
        }
        
        
        ListNode* tmp = new ListNode();
        ListNode* head = tmp;

        while(!pq.empty())
        {
            head->next = new ListNode(pq.top());
            pq.pop();
            head = head->next;            
        }
    
    return tmp->next;

    }
};