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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = l1;
        int carry = 0;
        while ( l1 && l2 ) {
            if ( l1 -> val + l2 -> val + carry < 10 ) {
                l1 -> val = l1 -> val + l2 -> val + carry;
                carry = 0;
            }
            else {
                l1 -> val = (l1 -> val + l2 -> val + carry) % 10;
                carry = 1;
            }
            if (!l1 -> next || !l2 -> next) break;

            l1 = l1 -> next;
            l2 = l2 -> next;
        }

        if ( l2 -> next ) {    // connect l2 to l1
            l1 -> next = l2 -> next;
            l1 = l1 -> next;
        }
        else if (l1 -> next) l1 = l1 -> next;   // connect l1 itself
        else if (carry == 1) {   // dealing with carry issues
            ListNode* node = new ListNode(1);
            l1 -> next = node;
            l1 = l1 -> next;
            return ans;
        }

        while (l1 && l1 -> next && carry == 1) {
            if ( l1 -> val + carry < 10 ) {
                l1 -> val = l1 -> val + carry;
                carry = 0;
            }
            else {
                l1 -> val = (l1 -> val + carry) % 10;
                carry = 1;
            }
            l1 = l1 -> next;
        }

        // handling the highest digit
        if (carry == 1) {
            if (l1 -> val == 9) {
                ListNode* node = new ListNode(1);
                l1 -> val = 0;
                l1 -> next = node;
                l1 = l1 -> next;
            }
            else 
                l1 -> val += 1;
        }
        return ans;
    }
};
