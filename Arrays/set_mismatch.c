/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int *retArr = (int*) malloc(2*sizeof(int));
    int j = 0, dupli, miss;
    int *vis = (int*) malloc(numsSize*sizeof(int));
    for(int i = 0; i < numsSize;i++){
		vis[i] = 0;
	}
    for(int i = 0; i < numsSize; i++){
        int n = nums[i];
        if (vis[n - 1] == 1){
            dupli = n;
        }else{
            vis[n - 1] = 1;
        }
    }
    for(int j = 0; j < numsSize; j++){
        if (vis[j] == 0){
            miss = j + 1;
        }
    }
    retArr[0] = dupli;
    retArr[1] = miss;
    *returnSize = 2;
    return retArr;
}