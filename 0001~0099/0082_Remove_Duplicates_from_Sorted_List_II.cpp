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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* pre = head;
        ListNode* ans = pre;
        
        bool first = true;
        if ( !head || !head->next ) return head;

        while ( head -> next != NULL ) {
            if ( head -> next -> val == head -> val) {
                int num = head -> val;
                while ( head && head -> val == num ){
                    head = head -> next;
                }

                if( !head || !head -> next ) {
                    pre ->next = head;
                    pre = pre->next;
                    if(first) ans = pre;
                    return ans;
                }
                
                if (first) {
                    pre = head;
                    ans = pre;
                }
                
                // printf("%d", pre->val);
            }
            else {
                if(!first) {
                    pre -> next = head;
                    pre = pre->next;
                }
                head = head->next;
                first = false;
            }
        }
        return ans;
    }
};
