/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *retArr = (int*) malloc(numsSize*sizeof(int));
    for(int i = 0; i < numsSize; i++){
        int num = nums[i];
        int count = 0;
        for(int j = 0; j < numsSize; j++){
            if(nums[j] < num){
                count += 1;
            }
        }
        retArr[i] = count;
    }
    *returnSize = numsSize;
    return retArr;
}