/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* p=head;
    struct ListNode* q=NULL;
    struct ListNode* x=NULL;
    struct ListNode gummy={0,NULL};
    x=&gummy;
    x->next=head;
    if(p==NULL){
        return NULL;
    }
    while(p!=NULL){
        if(p->next==NULL){
            return gummy.next;
        }
        q=p;
        p=p->next;
        q->next=p->next;
        p->next=q;
        x->next=p;
        p=q->next;
        x=q;
    }
    return gummy.next;
}