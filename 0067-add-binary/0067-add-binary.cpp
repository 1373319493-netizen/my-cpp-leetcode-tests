class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int c=0;
        int n1=0;
        int n2=0;

       for(int i=0;i<max(a.size(),b.size());i++){
        n1=0;
        n2=0;
        if(i<a.size()){
            n1 = a[a.size()-1-i] - '0';
        }
        if(i<b.size()){
            n2 = b[b.size()-1-i] - '0';
        }
        
        res=to_string((n1+n2+c)&1)+res;
        c=(n1+n2+c)>>1;

       }
       if(c==1)
       {
        res=to_string(c)+res;
       }
       return res;
    }


};
        
    