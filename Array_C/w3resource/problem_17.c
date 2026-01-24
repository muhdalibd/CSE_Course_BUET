#include <stdio.h>

int main(){
    /*
        17. Second Smallest Element

        Write a program in C to find the second smallest element in an array.
        Test Data :
        Input the size of array : 5
        Input 5 elements in the array (value must be <9999) :
        element - 0 : 0
        element - 1 : 9
        element - 2 : 4
        element - 3 : 6
        element - 4 : 5
        Expected Output :
        The Second smallest element in the array is : 4
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

    int min = arr[0], sceMin = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            sceMin = min;
            min = arr[i];
        }
        else if(arr[i] < sceMin && arr[i] != min){
            sceMin = arr[i];
        }
    }

    printf("The Second smallest element in the array is : %d", sceMin);

    return 0;
}