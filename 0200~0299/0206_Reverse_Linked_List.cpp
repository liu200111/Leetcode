class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) return head;

        ListNode* dummyHead = new ListNode(0);
        ListNode* dummy = dummyHead;
        
        pointfromLast(head, dummy);
        
        dummy->next = nullptr; // avoid Circular Linked Lists
        return dummyHead->next;
    }
    void pointfromLast(ListNode* head, ListNode* &dummy) {
        if (head->next) pointfromLast(head->next, dummy);
        
        dummy->next = head;
        dummy = dummy->next;
        
        return;
    }
};
