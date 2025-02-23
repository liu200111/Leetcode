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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
                
        ListNode* dummyHead = new ListNode(0);  // new head
        ListNode* dummy = dummyHead;  // point to the end of the new link list
        ListNode* head_ = head->next; 

        while (head && head_) {

            dummy->next = head_; // point to an even number
            head->next = head_->next; // point to the node of the next pair
            head_->next = head; // point to an odd number

            // move dummy to the new last node
            dummy = head;

            // update head and head_ to the next pair of nodes
            head = head->next;
            if (head) head_ = head->next;
            else break;

        }
        
        return dummyHead->next;
    }
};
