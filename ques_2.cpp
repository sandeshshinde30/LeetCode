class Solution {
public:
    // long extractNum(ListNode* node)
    // {
    //     long n = 0;
    //     while (node != NULL)
    //     {
    //         int t = node->val;
    //         n = (n * 10) + t;
    //         node = node->next;
    //     }
    //     return n;
    // }

    // long revNum(long num)
    // {
    //     long n = 0;
    //     while (num)
    //     {
    //         int t = num % 10;
    //         n = (n * 10) + t;
    //         num = num / 10;
    //     }
    //     return n;
    // }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* temp = new ListNode(0);
        ListNode* temp1 = temp;
        int carry = 0;
        while(l1!=NULL || l2!=NULL || carry)
        {
            int sum = 0;
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1 = l1->next;            
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2 = l2->next;        
            }
            sum += carry;
            carry = sum/10;

            ListNode* newNode = new ListNode(sum%10);
            temp1->next = newNode;        
            temp1 = temp1->next;
        }


        // return temp->next;

        // long n1 = extractNum(l1);
        // long n2 = extractNum(l2);
        // long sum = 0;

        // n1 = revNum(n1);
        // n2 = revNum(n2);

        // sum = n1 + n2;

        // // sum = revNum(sum);

        // ListNode* temp = new ListNode(0);
        // ListNode* l3 = temp;

        // if (sum == 0) return temp;
        // while (sum)
        // {
        //     int n = sum % 10;
        //     ListNode* newNode = new ListNode(n);
        //     sum = sum / 10;
        //     l3->next = newNode;
        //     l3 = l3->next;
        // }

        return temp->next;
    }
};

