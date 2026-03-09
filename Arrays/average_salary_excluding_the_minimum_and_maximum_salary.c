/*Problem No: 1491
Problem: Average Salary Excluding the Minimum and Maximum Salary
Platform: LeetCode
Topic: Arrays
Approach: Find min and max while summing all values, then subtract them from total sum
Time Complexity: O(n)
Space Complexity: O(1)
*/
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