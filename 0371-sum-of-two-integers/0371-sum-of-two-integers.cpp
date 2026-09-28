class Solution {
public:
    int getSum(int a, int b) {
        int x=a;
        int y=b;
        int z=-1;
        while(1){
            z=x&y;
            z<<=1;
            x=x^y;
            if((x&z)==0){
                x=x|z;
                break;
            }
            else{
                y=z;
            }
        }
        
        return x;
    }
};