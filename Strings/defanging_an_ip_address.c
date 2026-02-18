char * defangIPaddr(char * address){
    char *retstr;
    int j = 0;
    retstr = (char*)malloc(100*sizeof(char));
    for(int i = 0; address[i] != '\0'; i++){
        if(address[i] == '.'){
            retstr[j++] = '[';
            retstr[j++] = address[i];
            retstr[j++] = ']';
        }else{
            retstr[j++] = address[i];
        }
    }
    retstr[j] = '\0';
    return retstr;
}