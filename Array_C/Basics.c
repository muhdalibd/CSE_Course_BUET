/*
    An array is a linear data structure that stores a fixed-size sequence of elements
    of the same data type in contiguous memory locations. Each element can be accessed
    directly using its index, which allows for efficient retrieval and modification.
*/


/*
    #1. Basic Declaration
        data_type array_name[array_size];
            int marks[5];
    #2. Declaration with Initialization
        A. Specifying Size
            int numbers[5] = {5, 10, 15, 20, 25};
        B. Skipping Size (Implicit Sizing)
            int numbers[] = {1, 2, 3}; // Size is automatically 3
        C. Partial Initialization
            int numbers[5] = {1, 2}; // Elements are: 1, 2, 0, 0, 0
    #3. Designated Initialization (C99 Standard)
            int numbers[10] = {[3] = 50, [7] = 100};
        // Indices 3 and 7 are set; all others are 0.
    #4. Multi-Dimensional Arrays
        Declaration: int matrix[rows][columns];
            int matrix[2][3] = {
                {1, 2, 3}, 
                {4, 5, 6}
            };
*/

#include<stdio.h>

int main(){

    // int myNumbers[5];
    // myNumbers[0] = 1;
    // myNumbers[1] = 3;
    // myNumbers[2] = 5;
    // myNumbers[3] = 7;
    // myNumbers[4] = 9;
    // printf("%d ", myNumbers[2]);

    // int myNumbers[5] = {1, 2, 3, 4, 5};
    // int myNumbers[] = {1, 2, 3, 4, 5}; // Auto Adjust Size
    // printf("%d ", myNumbers[0]);
    // printf("%d ", myNumbers[4]);

    // int myNumbers[5]; // Garbase Value
    // printf("%d ", myNumbers[1]);
    // printf("%d ", myNumbers[4]);

    // int myNumbers[5] = {}; // Value ZERO
    // printf("%d ", myNumbers[1]);
    // printf("%d ", myNumbers[4]);

    // int myNumbers[5] = {8, 5}; // Value 8 5 0 0 0
    // printf("%d ", myNumbers[1]);
    // printf("%d ", myNumbers[4]);

    // int myNumbers[10] = {[4]=8, [6]=5};
    // printf("%d ", myNumbers[4]);
    // printf("%d ", myNumbers[5]);
    // printf("%d ", myNumbers[6]);

    // int myNumbers[5];
    // for(int i=0; i<5; i++){
    //     scanf("%d", &myNumbers[i]);
    // }
    // printf("%d", myNumbers[3]);

    // • Input from USER:
    // int n; // array size
    // printf("Enter array size: ");
    // scanf("%d", &n);

    // int arr[n]; // declaration
    // printf("Enter %d numbers: ", n);
    // // Taking Array Input
    // for(int i=0; i<n; i++){
    //     scanf("%d", &arr[i]);
    // }
    // printf("Your Array is : ");
    // // Giving Aray Output
    // for(int i=0; i<n; i++){
    //     printf("%d ", arr[i]);
    // }

    // int myNumbers[] = {25, 50, 75, 100};
    // int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    // for (int i = 0; i < length; i++) {
    //     printf("%d\n", myNumbers[i]);
    // }

    // int myNumbers[] = {10, 25, 50, 75, 100};
    // int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    // printf("%d ", sizeof(myNumbers)); // 20 Bytes Memory Occuify 
    // printf("%d", length);  // Array Size

    return 0;
}