int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);
    int k, c,res = 0;
    for(int i = 0; i < n-m+1; i++){
        k = i;
        c = 0;
        for(int j = 0; j < m; j++){
            if(haystack[k] == needle[j]){
                k++;
                c++;
            }else{
                break;
            }
        }
        if(c == m){
            return i;
        }
    }
    return -1;
}