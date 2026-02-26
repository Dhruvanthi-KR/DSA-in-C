char* restoreString(char* s, int* indices, int indicesSize) {
    char *str = (char*) malloc(indicesSize+1* sizeof(char));
    char var;
    int index, n = strlen(s);
    for(int i = 0; i < n; i++){
        var = s[i];
        index = indices[i];
        str[index] = var;
    }
    str[n] = '\0';
    return str;
}