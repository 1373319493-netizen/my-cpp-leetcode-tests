class Solution {
public:
    int search(vector<int>& nums, int target) {
        int right=nums.size()-1;
        int left=0;
        int z=0;
        bool x=false;
        while(x==false){
            z=(left+right)/2;
            x=left==right;
            if(nums[z]==target){
                return z;
            }
            if(nums[z]<target){
                left=z+1;
            }
            else{
               right=z;
            }
            
        }
        return -1;
    }
};