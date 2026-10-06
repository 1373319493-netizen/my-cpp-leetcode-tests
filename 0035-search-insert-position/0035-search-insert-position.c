int searchInsert(int* nums, int numsSize, int target) {
    int i=0;
    int j=numsSize;
    while(i!=j){
        if(nums[(i+j)/2]==target){
            return (i+j)/2;
        }
        else if(nums[(i+j)/2]>target){
            j=(i+j)/2;
        }else{
            i=(i+j)/2+1;
        }
        
    }
       return i;
}