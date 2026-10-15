/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode* q=head;
    int n=0;
    while(q!=NULL){
        q=q->next;
        n++;
    }
    int*a=malloc(n*sizeof(int));
    n=0;
    q=head;
    while(q!=NULL){
        a[n]=q->val;
        q=q->next;
        n++;
    }
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]){
            return false;
        }
    }
   
    return true;
}