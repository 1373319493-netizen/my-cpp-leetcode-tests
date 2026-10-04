void reverseString(char* s, int sSize) {
    char carry;
    for(int i=0;i<sSize/2;i++){
        carry=s[i];
        s[i]=s[sSize-i-1];
        s[sSize-i-1]=carry;

    }
}