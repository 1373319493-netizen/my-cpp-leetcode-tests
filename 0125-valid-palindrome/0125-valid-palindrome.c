bool isPalindrome(char* s) {
    int length=strlen(s);
    int j=0;
    for(int i=0;i<length;i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
            s[j]=s[i];
            j++;
        }else if(s[i]>='A'&&s[i]<='Z'){
            s[j]=s[i]-'A'+'a';
            j++;
        }
    }
    for(int i=0;i<j/2;i++){
        if(s[i]!=s[j-i-1]){
            return false;
        }
    }
    return true;
}