bool threeConsecutiveOdds(int* arr, int arrSize) {
    int count = 0, streak = 0;
    for(int i = 0; i < arrSize; i++){
        if(arr[i] % 2 != 0){
            count++;
            if(count == 3){
                return true;
            }
        }else{
            count = 0;
        }
    }return 0;
}