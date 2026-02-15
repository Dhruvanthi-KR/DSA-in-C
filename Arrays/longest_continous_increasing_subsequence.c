int findLengthOfLCIS(int* nums, int numsSize) {
    int length = 1, streak = 1;
    for(int i = 0; i < numsSize - 1; i++){
        if(nums[i] < nums[i+1]){
            length += 1;
            if(length > streak){
                streak = length;
            }
        }else{
            length = 1;
        }
    }if(streak >= length){
        return streak;
    }else{
        return length;
    }
}