char* longestPalindrome(char* s) {
    int n = (int)strlen(s);
    int m = 2 * n + 1;

    char *t = malloc(m + 1);
    int *p = calloc(m, sizeof(int));

    for (int i = 0; i < n; i++) {
        t[2 * i] = '#';
        t[2 * i + 1] = s[i];
    }
    t[2 * n] = '#';
    t[m] = '\0';

    int center = 0;
    int right = 0;  
    int start = 0;
    int maxLen = 0;

    for (int i = 0; i < m; i++) {
        if (i < right) {
            int mirror = 2 * center - i;
            int limit = right - i;
            if (p[mirror] < limit) { 
                p[i] = p[mirror];
            } else {
                p[i] = limit;
            }
        }
        while (i - p[i] - 1 >= 0 &&
               i + p[i] + 1 < m &&
               t[i - p[i] - 1] == t[i + p[i] + 1]) {
            p[i]++;
        }
        if (i + p[i] > right) {
            center = i;
            right = i + p[i];
        }
        if (p[i] > maxLen) {
            maxLen = p[i];
            start = (i - p[i]) / 2;
        }
    }

    char *result = malloc(maxLen + 1);
    memcpy(result, s + start, maxLen);
    result[maxLen] = '\0';

    free(t);
    free(p);
    return result;
}