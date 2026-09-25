class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> ans;
        ans.reserve(n+1);
        for(int i=0;i<=n;i++){
            int num=0;
            int x=i;
            while(x>0){
                num+=x&1;
                x=x>>1;
            }
            ans.push_back(num);

        }
        return ans;

    }
};