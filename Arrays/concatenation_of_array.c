/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int dou = numsSize + numsSize;
    int *retArr = (int*)malloc(dou*sizeof(int));
    for(int i = 0; i < numsSize; i++){
        retArr[i] = nums[i];
        retArr[i + numsSize] = nums[i];
    }
    *returnSize = dou;
    return retArr;
}