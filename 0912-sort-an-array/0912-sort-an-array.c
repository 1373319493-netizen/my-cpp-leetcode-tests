/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArray(int* nums, int numsSize, int* returnSize) {
    int x;
    int y;
    for(int i=numsSize/2-1;i>=0;i--){
        x=i;
        while(2*x+1<numsSize){
            if(2*x+2<numsSize){
                if(nums[x]<nums[2*x+1]||nums[x]<nums[2*x+2]){
                    if(nums[2*x+1]>nums[2*x+2]){
                         y=nums[2*x+1];
                         nums[2*x+1]=nums[x];
                         nums[x]=y;
                         x=2*x+1;
                    }else{
                        y=nums[2*x+2];
                         nums[2*x+2]=nums[x];
                         nums[x]=y;
                         x=2*x+2;
                    }
                 
                }else{break;}
            }else {
               if(nums[x]<nums[2*x+1]){
               y=nums[2*x+1];
               nums[2*x+1]=nums[x];
               nums[x]=y;
               x=2*x+1;
               }else{break;}
            }
        }
        
    }
    for(int i=0;i<numsSize-1;i++){
        y=nums[0];
        nums[0]=nums[numsSize-i-1];
        nums[numsSize-i-1]=y;
        x=0;
        while(2*x+1<numsSize-i-1){
            if(2*x+2<numsSize-i-1){
                if(nums[x]<nums[2*x+1]||nums[x]<nums[2*x+2]){
                    if(nums[2*x+1]>nums[2*x+2]){
                         y=nums[2*x+1];
                         nums[2*x+1]=nums[x];
                         nums[x]=y;
                         x=2*x+1;
                    }else{
                        y=nums[2*x+2];
                         nums[2*x+2]=nums[x];
                         nums[x]=y;
                         x=2*x+2;
                    }
                 
                }else{break;}
            }else {
               if(nums[x]<nums[2*x+1]){
               y=nums[2*x+1];
               nums[2*x+1]=nums[x];
               nums[x]=y;
               x=2*x+1;
               }else{break;}
            }
        }
    }
    *returnSize=numsSize;
    return nums;
}