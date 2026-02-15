int maxPower(char* s) {
    int curr = 1, max = 1;
    for(int i = 1; s[i] != '\0'; i++){
        if(s[i] == s[i-1]){
            curr++;
            if(curr > max){
                max = curr;
            }
        }else{
            curr = 1;
        }
    }if(max >= curr){
        return max;
    }
    else{
        return curr;
    }
}