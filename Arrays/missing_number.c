int missingNumber(int* nums, int numsSize) {
    int sum = 0;
    for(int i = 0; i < numsSize;i++){
        sum += nums[i];
    }
    int missnumb = numsSize*(numsSize + 1) / 2 - sum;
    if(missnumb){
        return missnumb;
    }return 0;
}