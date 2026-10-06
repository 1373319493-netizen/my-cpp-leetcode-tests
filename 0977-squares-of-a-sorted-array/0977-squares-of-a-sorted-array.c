/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int*result=malloc(numsSize*sizeof(int));
    int i=0,j=numsSize-1;
    int sum;
    for(sum=0;sum<numsSize;sum++){
        if(abs(nums[i])>nums[j]){
            result[numsSize-1-sum]=pow(nums[i],2);
            i++;
        }else{
            result[numsSize-1-sum]=pow(nums[j],2);
            j--;
        }
    }
    *returnSize=numsSize;
    return result;
}