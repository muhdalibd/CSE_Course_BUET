#include <stdio.h>

int main(){
    /*
        1. Array Store & Print

        Write a program in C to store elements in an array and print them.
        Test Data :
        Input 10 elements in the array :
        element - 0 : 1
        element - 1 : 1
        element - 2 : 2
        .......
        Expected Output :
        Elements in array are: 1 1 2 3 4 5 6 7 8 9
    */
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in the array: \n", n);

    for(int i=0; i<n; i++){
        printf("Element - %d: ",i);
        scanf("%d", &arr[i]);
    }

    printf("Elements in array are: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}