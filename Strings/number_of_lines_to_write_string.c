/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberOfLines(int* widths, int widthsSize, char * s, int* returnSize){
    int currWidth = 0, Lines = 1, index = 0;
    for(int i = 0; s[i] != '\0'; i++){
        index = s[i] - 'a';
        int charWidth = widths[index];
        if(currWidth + charWidth <= 100){
            currWidth += charWidth;
        } else {
            Lines++;
            currWidth = 0;
            currWidth += charWidth;
        }
    }*returnSize = 2;
    int *arr = (int*)malloc(2*sizeof(int));
    arr[0] = Lines;
    arr[1] = currWidth;
    return arr;
}