

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *retArr = (int*)malloc(numsSize*sizeof(int));
    int j = 0;
        for(int i = 0; i < n; i++){
        retArr[j] = nums[i];
        j++;
        retArr[j] = nums[i+n];
        j++;
    }
    *returnSize = j;
    return retArr;
}