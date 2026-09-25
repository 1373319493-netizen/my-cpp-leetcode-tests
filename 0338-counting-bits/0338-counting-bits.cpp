class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> ans;
        ans.reserve(n+1);
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int num=0;
            num=ans[i/2]+(i&1);
            ans.push_back(num);

        }
        return ans;

    }
};