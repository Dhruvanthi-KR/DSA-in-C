/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int *retArr = (int*) malloc(numsSize*sizeof(int));
    int j = 0;
    int temp = 0;
    for(int i = 0; i < numsSize; i++){
        temp = nums[i];
        retArr[j] = nums[temp];
        j++;
    }
    *returnSize = numsSize;
    return retArr;
}