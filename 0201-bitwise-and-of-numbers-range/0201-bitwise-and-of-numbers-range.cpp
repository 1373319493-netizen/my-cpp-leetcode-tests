class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        int x=right^left;
        int z=0;
        while(x>0){
            x>>=1;
            z++;
        }
        left>>=z;
        left<<=z;

        
    
       
    return left;
    }
};