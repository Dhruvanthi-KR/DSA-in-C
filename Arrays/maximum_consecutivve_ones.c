int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count = 0, streak = 0;
    for(int i = 0; i < numsSize;i++){
        if(nums[i] == 1){
            count++;
            if(count > streak){
                streak = count;
            }
        }else{
            count = 0;
        }
    }if(count > streak){
        return count;
    }else{
        return streak;
    }
}