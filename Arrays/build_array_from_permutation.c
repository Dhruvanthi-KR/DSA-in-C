/**
Problem No: 1920
Problem: Build Array from Permutation
Platform: LeetCode
Topic: Arrays
Approach: Create a new array and place nums[nums[i]] at each index
Time Complexity: O(n)
Space Complexity: O(n)
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