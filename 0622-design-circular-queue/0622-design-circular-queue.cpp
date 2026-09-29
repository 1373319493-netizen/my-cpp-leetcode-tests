class MyCircularQueue {
private:
        vector<int> nums;
        int head;
        int num;
        int k1;
public:
    MyCircularQueue(int k) {
        k1=k;
        nums.resize(k1);
        head=0;
        num=0;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        nums[head]=value;
        num++;
        head=(head+1)%k1;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        num--;
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return nums[(head+k1-num)%k1];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return nums[(head+k1-1)%k1];
        
    }
    
    bool isEmpty() {
        return num==0;
    }
    
    bool isFull() {
        return num==k1;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */