bool detectCapitalUse(char* word) {
    int capi = 0;
    int n = strlen(word);
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] >= 65 && word[i] <= 90){
            capi++;
        }
    }
    if(n == capi || capi == 0){
        return 1;
    } else if (capi == 1 && (word[0] >= 65 && word[0] <= 90)){
       return 1;
    } else {
        return 0;
    }
}