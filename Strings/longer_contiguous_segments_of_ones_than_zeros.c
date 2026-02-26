bool checkZeroOnes(char* s) {
    int currZero = 0, currOne = 0;
    int streakOne = 0, streakZero = 0, n = strlen(s);
    for(int i = 0; i < n;i++){
        if(s[i] == '1'){
            currOne++;
            if(streakOne < currOne){
                streakOne = currOne;
            }currZero = 0;
            
        } else {
            currZero++;
            if(streakZero < currZero){
                streakZero = currZero;
            }currOne = 0;
            
        }
    }if(streakOne > streakZero){
        return 1;
    } else {
        return 0;
    }
}