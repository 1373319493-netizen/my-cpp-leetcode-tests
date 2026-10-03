int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int sum=0;
    int maxsum=0;
    for(int i;i<numsSize;i++){
        if(nums[i]!=0){
            sum++;
        }
        else{
            maxsum=fmax(sum,maxsum);
            sum=0;
        }

    }
     maxsum=fmax(sum,maxsum);
    return maxsum;
}