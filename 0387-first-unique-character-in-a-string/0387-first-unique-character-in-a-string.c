int firstUniqChar(char* s) {
    int nums[26]={0};
    for(int i=0;i<strlen(s);i++){
        nums[s[i]-'a']++;
    }
    for(int i=0;i<strlen(s);i++){
        if(nums[s[i]-'a']==1){
            return i;
        }
    }
    return -1;
}