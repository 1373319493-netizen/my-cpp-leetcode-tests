int myAtoi(char* s) {
    int num=0;
    int symbol=1;
    bool exist=true;
    bool white=true;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='-'&&exist){
            white=false;
            symbol=-1;
            exist=false;
        }else if(s[i]=='+'&&exist){
            white=false;
            symbol=1;
            exist=false;
        }else if((s[i]=='-'||s[i]=='+')){
            break;
        }else if(s[i]>='0'&&s[i]<='9'&&(num>INT_MAX/10||(num==INT_MAX/10&&s[i]-'0'>INT_MAX%10))){
            if(symbol==1){
                return INT_MAX;
            }else{
                return -INT_MAX-1;
            }
        }else if(s[i]>='0'&&s[i]<='9'){
            white=false;
            exist=false;
            num=num*10-'0'+s[i];
        }else if(s[i]!=' '||!white){
            break;
        }

    }
    return symbol*num;
}