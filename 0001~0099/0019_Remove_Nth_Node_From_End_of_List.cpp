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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* pre = head;
        ListNode* post = head;

        // pre go first
        for ( int i = 0; i < n; ++i )
            pre = pre -> next;
        
        // pre points to NULL => deletes the first digit
        if ( pre == NULL ) {
            if ( post -> next ) {
                post = post -> next;
                return post;
            }
            else
                return NULL;
        }
            
        while ( pre -> next ) {
            pre = pre -> next;
            head = head -> next;
        }
        
        if ( head -> next && head -> next -> next ) 
            head -> next = head -> next -> next;
        else
            head -> next = NULL;

        return post;
    }
};
