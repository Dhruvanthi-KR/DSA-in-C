int findNumbers(int* nums, int numsSize) {
    int even = 0, value;
    for(int i = 0; i < numsSize; i++){
        value = nums[i];
        int count = 0;
        while(value > 0){
            count++;
            value = value / 10;
        }
        if(count % 2 == 0){
            even++;
        }
    }
    return even;
}