/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode dummy;  
    dummy.next = head;       

    struct ListNode *cur = &dummy;  

    while (cur->next != NULL) {
        struct ListNode *x = cur->next;

        if (x->val == val) {
            cur->next = x->next;
        } else {
            cur = x;
        }
    }

    return dummy.next;
}