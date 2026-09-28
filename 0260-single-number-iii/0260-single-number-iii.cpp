class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int sum=0;
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            sum=sum^nums[i];
        }
        int x=sum;
        int n=0;
        int mask=1;
        while(1){
            if((x&1)==1){
                mask<<=n;
                break;
            }
            n++;
            x>>=1;
        }
        for(int i=0;i<nums.size();i++){
            if((nums[i]|mask)!=nums[i]){
                a=nums[i]^a;
            }
            else{
                b=b^nums[i];
            }
        }
        return {a,b};
    }
};