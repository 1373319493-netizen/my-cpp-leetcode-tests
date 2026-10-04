char* longestCommonPrefix(char** strs, int strsSize) {
    int j=0;
    bool x=true;
    char y;
    while(x){
        for(int i=0;i<strsSize;i++){ 
            y=strs[0][j];
            if(strs[i][j]=='\0'){
                x=false;
                break;
            }
            y^=strs[i][j];
            if(y!='\0'){
               x=false;
               break;
            }
        }
        j++;
    }
    char *result=malloc(j*sizeof(char));
    for (int i=0; i<j-1;i++) {
    result[i]=strs[0][i];
}
result[j-1] = '\0';
return result;
}