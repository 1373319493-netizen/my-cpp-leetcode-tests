void rotate(int* nums, int numsSize, int k) {
    int x=0;
    k=k%numsSize;
    int*num2=malloc((numsSize-k)*sizeof(int));
    for(int i=0;i<numsSize-k;i++){
        num2[i]=nums[i];
    }
    for(int i=0;i<k;i++){
        nums[i]=nums[i+numsSize-k];
    }
    for(int i=k;i<numsSize;i++){
        nums[i]=num2[i-k];
    }
}