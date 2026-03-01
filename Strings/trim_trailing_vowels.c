char* trimTrailingVowels(char* s) {
    int n = strlen(s);
    int i = n -1;
    while(i >= 0 &&(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')){
        i--;
    }
    s[i+1] = '\0';
    return s;
}