/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* x= list1;
    struct ListNode* y= list2;
    struct ListNode dummy = {0, NULL}; 
    struct ListNode* q = &dummy;
    while(x!=NULL||y!=NULL){
        if(x==NULL){
            q->next=y;
            y=y->next;
            q=q->next;
        }else if(y==NULL){
            q->next=x;
            x=x->next;
            q=q->next;
        }else if(x->val>y->val){
            q->next=y;
            y=y->next;
            q=q->next;
        }else{
             q->next=x;
             x=x->next;
             q=q->next;
        }
    }
    return dummy.next;
}