class Solution {
public:
    int hammingWeight(int n) {
        int sum=0;
        while(n>0){
            int x=n%2;
            if(x==1){
                sum++;
            }
            n=n/2;
        }
        return sum;
    }
};