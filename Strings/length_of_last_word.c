int lengthOfLastWord(char* s) {
    int n = strlen(s);
    int temp, count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != ' '){
            count++;
            temp = count;
        }
        else if(s[i] == ' '){
            count = 0;  
        }
    }
    if(temp == count){
        return count;
    }else{
        return temp;
    }
}