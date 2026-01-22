#include <stdio.h>

int main(){
    /*
        4. Array Copy

        Write a program in C to copy the elements of one array into another array.
        Test Data :
        Input the number of elements to be stored in the array :3
        Input 3 elements in the array :
        element - 0 : 15
        element - 1 : 10
        element - 2 : 12
        Expected Output :
        The elements stored in the first array are :
        15 10 12
        The elements copied into the second array are :
        15 10 12
    */
    int n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array :\n", n);
    for(int i=0; i<n; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements stored in the first array are :\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    int sndArr[n];
    for(int i=0; i<n; i++){
        sndArr[i] = arr[i];
    }

    printf("\nThe elements copied into the second array are :\n");
    for(int i=0; i<n; i++){
        printf("%d ", sndArr[i]);
    }

    return 0;
}