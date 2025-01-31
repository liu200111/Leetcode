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
        
        while( head != NULL ){
            if ( head -> val != pre -> val ) {
                pre -> next = head;
                pre = pre -> next;
            }
            // remove the duplicate numbers at the end
            if ( head -> next == NULL )
                pre -> next = NULL; 
            head = head -> next;
        }
        return ans;
    }
};
