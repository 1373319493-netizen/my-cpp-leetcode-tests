/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x > y) - (x < y);
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int capacity = 100;
    int count = 0;
    int** result = malloc(capacity * sizeof(int*));
    int n=numsSize;
    int mid;
    qsort(nums, numsSize, sizeof(int), cmp);
    int left,right;
    for(int i=0;i<n-1;i++){
        left=i+1;
        right=n-1;
        while(left<right){
            if(nums[left]+nums[right]+nums[i]==0){
                result[count] = malloc(3 * sizeof(int));
                result[count][0] = nums[i];
                result[count][1] = nums[left];
                result[count][2] = nums[right];
                count++;
                if (count == capacity) {
                    capacity *= 2;
                   int** temp = realloc(result, capacity * sizeof(int*));
                   result = temp;
                }
            }
            if(nums[left]+nums[right]+nums[i]>0){
             right--;
             while(nums[right+1]==nums[right]&&left!=right){
             right--;
             }
            }else if(nums[left]+nums[right]+nums[i]<=0){
                left++;
             while(nums[left]==nums[left-1]&&left!=right){
             left++;
             }
            }
            }
            while(nums[i+1]==nums[i]&&i<n-2){
                i++;
            }
        }
       *returnSize = count;
    *returnColumnSizes = malloc(count * sizeof(int));
    for (int k = 0; k < count; k++) {
         (*returnColumnSizes)[k] = 3;
    }
    return result;
}