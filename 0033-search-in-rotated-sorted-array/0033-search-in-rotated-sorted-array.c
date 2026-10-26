int search(int* nums, int numsSize, int target) {
    int left=0;
    int right=numsSize-1;
    int mid=0;
    int mid1=0;
    while(left<right){
        mid=(left+right)/2;
        if(nums[mid]>nums[right]){
            left=mid+1;
        }else{
            right=mid;
        }
    }
    mid=(left+right)/2;
    left=mid;
    right=(mid-1+numsSize)%numsSize;
    while((left-mid+numsSize)%numsSize<(right-mid+numsSize)%numsSize){
        mid1=(((left-mid+numsSize)%numsSize+(right-mid+numsSize)%numsSize)/2+mid+numsSize)%numsSize;
        if(nums[mid1]<target){
            left=(mid1+1+numsSize)%numsSize;
        }else if(nums[mid1]>target){
            right=mid1;
        }else{
            return mid1;
        }
    }
    mid1=(((left-mid+numsSize)%numsSize+(right-mid+numsSize)%numsSize)/2+mid+numsSize)%numsSize;
    if(nums[mid1]==target){
        return mid1;
    }
    return -1;

}