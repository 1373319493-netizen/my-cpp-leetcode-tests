/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *a=headA;
    struct ListNode *b=headB;
    int na=1,nb=1,m=0;
    while(a->next!=NULL){
        na++;
        a=a->next;
    }
    while(b->next!=NULL){
        nb++;
        b=b->next;
    }
    if(a!=b){
        return NULL;
    }
    a=headA;
    struct ListNode *c=NULL;
    struct ListNode *d=NULL;
    while(a!=NULL){
        c=a;
        a=a->next;
        c->next=d;
        d=c;
    }
    b=headB;
    while(b!=NULL){
        m++;
        b=b->next;
    }
    int x=(m+nb-na-1)/2;
    while(d!=NULL){
        c=d;
        d=d->next;
        c->next=a;
        a=c;
    }
    b=headB;
    for(int i=0;i<x;i++){
        b=b->next;
    }
    return b;
}