bool isValid(char* s) {
    char *arr = malloc((strlen(s)+1)*sizeof(char));
    int i=0;
    int recent=0;
    while(s[i]!='\0'){
        if(s[i]=='{'||s[i]=='('||s[i]=='['){
            arr[recent]=s[i];
            recent++;
        }else if(recent==0){
            free(arr);
            return false;
        }else{
            if(s[i]-arr[recent-1]==1||s[i]-arr[recent-1]==2){
                recent--;
            }else{
                free(arr);
                return false;
            }
        }
        i++;
    }
     if(recent==0){
            free(arr);
            return true;
        }else{
            free(arr);
            return false;
        }
}