class Solution {
public:
    int reverseBits(int n) {
         int reversed=0;
        for(int i=0;i<32;i++){
            reversed+=reversed+n%2;
            n=n/2;
        }
        return reversed;
    }
};