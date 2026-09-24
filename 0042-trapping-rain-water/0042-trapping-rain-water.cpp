class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int i=0;
        int j=height.size()-1;
        int maxleft=height[i];
        int maxright=height[j];
        while(i<j){
            if(maxleft>maxright){
                j--;
                if(height[j]>maxright){
                    maxright=height[j];
                }
                else{
                    water+=maxright-height[j];
                }

            }
            else{
                i++;
                if(height[i]>maxleft){
                    maxleft=height[i];
                }
                else{
                    water+=maxleft-height[i];
                }
            }
                }
                
            return water;
        }
            
};
            
         
           

    
