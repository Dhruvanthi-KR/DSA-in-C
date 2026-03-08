char* firstPalindrome(char** words, int wordsSize) {
    int n = wordsSize;
    char *m;
    int k, j;
    for(int i = 0; i < n; i++){
        m = words[i];
        k = strlen(m);
        for(j = 0; j < k / 2;j++){
            if(m[j] != m[k - j - 1]){
                break;
            }
        }if(j == (k / 2)){
            return m;
        }
    }
    return "";
}