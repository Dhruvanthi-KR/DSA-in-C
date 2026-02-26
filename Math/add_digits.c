int addDigits(int num) {
    int temp = num, sum, last;
    while(num >= 10){
        temp = num;
        temp = temp % 10;
        last = temp;
        num /= 10;
        sum = temp + num;
        num = sum;
    }
    return sum;
}