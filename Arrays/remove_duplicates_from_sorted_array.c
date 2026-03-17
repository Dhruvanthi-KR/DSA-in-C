/*
  Problem No: 26
  Problem: Remove Duplicates from Sorted Array
  Topic: Arrays, Two Pointers

  Time Complexity: O(n)
  Space Complexity: O(1)
 */
int removeDuplicates(int* nums, int numsSize) {
    int j = 1;
    for(int i = 1;i < numsSize; i++){
        if(nums[i-1] != nums[i]){
            nums[j++] = nums[i];
        }
    }
    return j;
}