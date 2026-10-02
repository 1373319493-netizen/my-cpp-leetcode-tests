void rotate(int* nums, int numsSize, int k) {
    int x=0;
    k=k%numsSize;
    for(int i=0;i<numsSize/2;i++){
        x=nums[i];
        nums[i]=nums[numsSize-i-1];
        nums[numsSize-i-1]=x;
    }
    for(int i=0;i<k/2;i++){
        x=nums[i];
        nums[i]=nums[k-i-1];
        nums[k-i-1]=x;
    }
    for(int i=k;i<(numsSize+k)/2;i++){
        x=nums[i];
        nums[i]=nums[numsSize+k-i-1];
        nums[numsSize+k-i-1]=x;
    }
}