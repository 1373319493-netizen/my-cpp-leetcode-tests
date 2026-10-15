/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast=head;
    struct ListNode *slow=head;
    bool cycle=false;
    while(true){
        if(fast!=NULL){
            fast=fast->next;
        }else{
            break;
        }
         if(fast!=NULL){
            fast=fast->next;
        }else{
            break;
        }
        slow=slow->next;
        if(slow==fast){
            cycle=true;
            break;
        }
    }
    return cycle;
}