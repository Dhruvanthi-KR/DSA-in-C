bool canAliceWin(int* nums, int numsSize) {
    int single = 0, doublee = 0;
    for(int i = 0; i < numsSize;i++){
        if(nums[i] >= 0 && nums[i] <= 9){
            single += nums[i];
        }else{
            doublee += nums[i];
        }
    }
    if(single != doublee){
        return 1;
    }return 0;
}