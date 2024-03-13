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
    ListNode* removeZeroSumSublists(ListNode* head) {
        map<int,ListNode*> map;
        ListNode* dummy = new ListNode(0,head);
    
        ListNode* temp = head;
        int preSum = 0;

        while(temp!=NULL)
        {
           preSum += temp->data;
           map[preSum]=temp;
           temp = temp->next; 
        }

        temp = head;
        preSum = 0;

        while(temp!=NULL)
        {
           preSum += temp->data;
           temp->next = map[preSum].next;
        }

        return dummy->next;
    }
};
