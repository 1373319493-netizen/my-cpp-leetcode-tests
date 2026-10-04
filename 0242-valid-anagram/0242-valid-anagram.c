bool isAnagram(char* s, char* t) {
    int nums[26] = {0};
    int n1 = strlen(s);
    int n2 = strlen(t);

    for (int i = 0; i < n1; i++) {
        nums[s[i] - 'a']++;
    }
     for (int i = 0; i < n2; i++) {
        nums[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (nums[i]!=0) {
            return false;
        }
    }

    return true;
}