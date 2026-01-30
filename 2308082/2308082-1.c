#include <stdio.h>

void sortOddDescending(int oddElement[], int oddCount){
    for(int i=0; i<oddCount; i++){
        for(int j=i+1; j<oddCount; j++){
            if(oddElement[i] < oddElement[j]){
                int temp = oddElement[i];
                oddElement[i] = oddElement[j];
                oddElement[j] = temp;
            }
        }
    }
}


void sortEvenAscending(int evenElement[], int evenCount){
    for(int i=0; i<evenCount; i++){
        for(int j=i+1; j<evenCount; j++){
            if(evenElement[i] > evenElement[j]){
                int temp = evenElement[i];
                evenElement[i] = evenElement[j];
                evenElement[j] = temp;
            }
        }
    }
}



int main(){
    /*
        Problem 1:  
        Take the size of an array and the elements of the array input from the user. Sort all even 
        numbers in ascending order and odd numbers in descending order, maintaining their relative 
        positions. 
        Sample Input:  
        5  
        5 2 9 4 1 
        Sample Output: 9 2 5 4 1  
    */
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);


    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int evenElement[n];
    int oddElement[n];
    int oddCount = 0;
    int evenCount = 0;

    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            evenElement[evenCount ++] = arr[i];
        }
    }

    sortEvenAscending(evenElement, evenCount);

    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            oddElement[oddCount ++] = arr[i];
        }
    }

    sortOddDescending(oddElement, oddCount);


    int evenIndex = 0, oddIndex = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            printf("%d ", evenElement[evenIndex ++]);
        } else{
            printf("%d ", oddElement[oddIndex ++]);
        }
    }

    return 0;
}