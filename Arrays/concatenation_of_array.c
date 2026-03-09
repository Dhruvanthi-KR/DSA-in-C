/*
Problem No: 1929
Problem: Concatenation of Array
Platform: LeetCode
Topic: Arrays
Approach: Create a new array of size 2*n and copy nums twice
Time Complexity: O(n)
Space Complexity: O(n)
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