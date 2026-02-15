/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *rsum, j = 0;
    rsum = (int*)malloc(numsSize*sizeof(int));
    rsum[0] = nums[0];
    for(int i = 1; i < numsSize; i++){
        rsum[j + 1] = rsum[j] + nums[i];
        j++;
    }
    *returnSize = numsSize;
    return rsum;
}