#include <stdio.h>

int main(){
    /*
    ### Problem 1: Statistical Analysis 
    Implement a statistical analysis tool that allows the user to enter multiple
    numbers and then perform various statistical operations on the data. 
    
    ### Operations: 
    1. Find Maximum and Minimum Numbers 
    2. Calculate the Average 
    3. Count Even and Odd Numbers 
    4. Sum of All Numbers 
    */

    int n;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Please, enter a positive number: ");
        scanf("%d", &n);
    }

    int num;
    int maxNum, minNum, sumOfNum = 0, evenCount = 0, oddCount = 0;
    float avgNum = 0;

    printf("Enter %d numbers: ", n);

    for(int i=0; i<n; i++){
        scanf("%d", &num);

        if(i == 0){
            maxNum = num;
            minNum = num;
        }

        if(maxNum < num){
            maxNum = num;
        }
        if(minNum > num){
            minNum = num;
        }

        sumOfNum += num;

        if(i % 2 == 0){
            evenCount ++;
        } else{
            oddCount ++;
        }
    }

    avgNum = (float) sumOfNum / n;

    printf("Minimum Number: %d\n", minNum);
    printf("Maximum Number: %d\n", maxNum);
    printf("Sum of all Numbers: %d\n", sumOfNum);
    printf("Average: %.2f\n", avgNum);
    printf("Even Number Count: %d\n", evenCount);
    printf("Odd Number Count: %d\n", oddCount);

    return 0;
}