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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;
        
        ListNode* head = NULL;
        if ( list1->val <= list2->val ) 
            head = list1;
        else head = list2;

        ListNode* pre = head;
        bool first = true;
        while( list1 != NULL && list2 != NULL ){
            if ( list1->val <= list2->val ) {
                if (!first) pre->next = list1;
                pre = list1;
                list1 = list1->next;
            }
            else {
                if (!first) pre->next =  list2;
                pre = list2;
                list2 = list2->next;
            }

            first = false;
        }

        if ( list2!= NULL )
            pre->next = list2;
        else 
            pre->next = list1;
    
        return head;
    }
};
