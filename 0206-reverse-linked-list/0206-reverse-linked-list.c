/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* p=head;
    struct ListNode* q=NULL;
    struct ListNode* x=NULL;
    while(p!=NULL){
        q=p->next;
        p->next=x;
        x=p;
        p=q;
    }
    return x;
}