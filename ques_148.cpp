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
    ListNode* sortList(ListNode* head) {
        priority_queue<int,vector<int>,greater<int>>pq;
        ListNode* temp = head;

        while(temp!=NULL)
        {
            pq.push(temp->val);
            temp= temp->next;        
        }

        ListNode* dummy = new ListNode();
        head = dummy;

        while(!pq.empty())
        {
            dummy->next = new ListNode(pq.top());
            pq.pop();
            dummy = dummy->next;
        }

        return head->next;
    }
};
