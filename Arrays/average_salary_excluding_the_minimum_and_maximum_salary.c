double average(int* salary, int salarySize) {
    double max = salary[0];
    double min = salary[0];
    double sum = 0.0;
    for(int i = 0; i < salarySize; i++){
        if (max < salary[i]){
            max = salary[i];
        }if(min > salary[i]){
            min = salary[i];
        } sum += salary[i];
    } 
    int temp = max + min;
    sum -= temp;
    double avg = sum / (salarySize-2.0);
    return avg;
}