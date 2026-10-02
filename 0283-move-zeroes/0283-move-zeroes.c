void moveZeroes(int* nums, int numsSize) {
    int j=0;
    int num=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nums[j]=nums[i];
            j++;
            num++;
        }
        
        

    }
    for(int i=0;i<numsSize-num;i++){
            nums[i+num]=0;
        }
}