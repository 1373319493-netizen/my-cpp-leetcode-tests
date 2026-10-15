/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode dummy = {0, NULL};
    dummy.next=head;
    struct ListNode* q=head;
    struct ListNode* p=&dummy;
    int num=0;
    while(q!=NULL){
        q=q->next;
        num++;
    }
    int x=num-n;
    q=&dummy;
    for(int i=0;i<x;i++){
        q=q->next;
        p=p->next;
    }
    p=p->next;
    q->next=p->next;
    return dummy.next;
}