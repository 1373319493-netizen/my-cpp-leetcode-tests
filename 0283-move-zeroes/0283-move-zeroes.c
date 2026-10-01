void moveZeroes(int* nums, int numsSize) {
    int i=0;
    int num=0;
    int sum=0;
    while(i+1+sum<numsSize){
        if(nums[i]==0){
            nums[i]=nums[i+1+sum];
            nums[i+1+sum]=0;
            sum++;
        }
        else{
            i++;
            sum=0;
        }
        

    }
}