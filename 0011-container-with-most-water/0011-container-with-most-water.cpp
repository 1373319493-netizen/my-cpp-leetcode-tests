class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int water=(right-left)*min(height[left],height[right]);
            maxwater=max(maxwater,water);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxwater;
    }
};