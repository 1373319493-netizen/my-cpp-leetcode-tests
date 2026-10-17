
typedef struct {
    struct ListNode *head;
} MyLinkedList;

MyLinkedList* myLinkedListCreate() {
    MyLinkedList *obj = malloc(sizeof(*obj));
    obj->head = NULL;
    return obj;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    struct ListNode *x=obj->head;
    for(int i=0;i<index;i++){
        if(x==NULL){
            return -1;
        }
        x=x->next;
    }
    if (x == NULL) {
        return -1;
    }
    return x->val;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    struct ListNode *x=malloc(sizeof(*x));
    struct ListNode *y=obj->head;
    x->val=val;
    x->next=y;
    obj->head=x;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    struct ListNode *x=malloc(sizeof(*x));
    x->val=val;
    struct ListNode *y=obj->head;
    if(y==NULL){
        obj->head=x;
        x->next=NULL;
        return;
    }
    while(y->next!=NULL){
        y=y->next;
    }
    y->next=x;
    x->next=NULL;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    struct ListNode *y=obj->head;
    struct ListNode *z=NULL;
    if(index==0){
        struct ListNode *x=malloc(sizeof(*x));
        x->val=val;
        obj->head=x;
        x->next=y;
        return;
    }
    for(int i=0;i<index-1;i++){
        if(y==NULL){
            return;
        }
        y=y->next;
    }
    if(y==NULL){
        return;
    }
    if(y->next==NULL){
        struct ListNode *x=malloc(sizeof(*x));
        x->val=val;
        y->next=x;
        x->next=NULL;
    }else{
        struct ListNode *x=malloc(sizeof(*x));
        x->val=val;
        z=y->next;
        y->next=x;
        x->next=z;
    }
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    struct ListNode *y=obj->head;
    struct ListNode *z=NULL;
    if(obj->head==NULL){
        return;
    }
    if(index==0){
        obj->head=y->next;
        free(y);
        return;
    }
    for(int i=0;i<index-1;i++){
        if(y==NULL){
            return;
        }
        y=y->next;
    }
    if(y==NULL||y->next==NULL){
        return;
    }
    z=y->next;
    y->next=z->next;
    free(z);
}

void myLinkedListFree(MyLinkedList* obj) {
    struct ListNode *y=obj->head;
    struct ListNode *z=NULL;
    while(y!=NULL){
        z=y;
        y=y->next;
        free(z);
    }
    free(obj);
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/