int strStr(char* haystack, char* needle) {
    int j=0;
    int i;
     for(i=0;i<strlen(haystack);i++){
        if(needle[j]=='\0'){
            return i-j;
        }
        else if(haystack[i]==needle[j]){
            j++;
        }else{
            i-=j;
            j=0;
        }
     }
     if(needle[j]=='\0'){
            return i-j;
        }
     return -1;
}