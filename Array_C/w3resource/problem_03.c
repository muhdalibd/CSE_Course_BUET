#include <stdio.h>

int main(){
    /*
        3. Array Sum Calculation

        Write a program in C to find the sum of all elements of the array.
        Test Data :
        Input the number of elements to be stored in the array :3
        Input 3 elements in the array :
        element - 0 : 2
        element - 1 : 5
        element - 2 : 8
        Expected Output :
        Sum of all elements stored in the array is : 15
    */
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array :\n", n);
    int sum = 0;
    for(int i=0; i<n; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("Sum of all elements stored in the array is : %d", sum);
    return 0;
}