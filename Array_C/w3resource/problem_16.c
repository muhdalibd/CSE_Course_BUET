#include <stdio.h>

int main(){
    /*
        16. Second Largest Element

        Write a program in C to find the second largest element in an array.
        Test Data :
        Input the size of array : 5
        Input 5 elements in the array :
        element - 0 : 2
        element - 1 : 9
        element - 2 : 1
        element - 3 : 4
        element - 4 : 6
        Expected Output :
        The Second largest element in the array is : 6
    */
    int n;
    printf("Input the size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in the array: \n", n);

    for(int i=0; i<n; i++){
        printf("element - %d: ",i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0], secMax = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            secMax = max;
            max = arr[i];
        }
        else if(arr[i] > secMax && arr[i] != max){
            secMax = arr[i];
        }
    }

    printf("The Second largest element in the array is : %d", secMax);

    return 0;
}