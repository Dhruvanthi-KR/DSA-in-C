/*  Problem No: 287
    Problem: Find the Duplicate Number
    Platform: LeetCode
*/
int findDuplicate(int* nums, int numsSize) {
    int visit[numsSize + 1];
    for(int i = 0; i < numsSize;i++){
        visit[i] = 0;
    }
    for(int i = 0; i < numsSize; i++){
        if(visit[nums[i]] == 1){
            return nums[i];
        }visit[nums[i]] = 1;
    }
    return -1;
}