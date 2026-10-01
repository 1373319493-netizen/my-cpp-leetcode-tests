int removeDuplicates(int* nums, int numsSize) {
    int sum=1;
    int x=nums[0];
    for(int i=1;i<numsSize;i++){
        if(x!=nums[i]){
            x=nums[i];
            nums[sum]=nums[i];
            sum++;
        }
    }
    return sum;

}