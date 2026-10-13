/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* p=head;
    int sum=0;
    while(p!=NULL){
        sum++;
        p=p->next;
    }
    sum=sum/2;
    p=head;
    for(int i=0;i<sum;i++){
        p=p->next;
    }
    return p;
}