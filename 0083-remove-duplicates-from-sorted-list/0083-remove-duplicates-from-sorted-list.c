/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL){
        return head;
    }
    struct ListNode* p=head;
    struct ListNode* q;
    while(p->next!=NULL){
        q=p->next;
        if(p->val==q->val){
            p->next=q->next;
        }else{
            p=q;
        }
    }
    return head;
}