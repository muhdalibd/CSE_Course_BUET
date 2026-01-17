#include <stdio.h>

int main(){
    /*
        Reverse Array in C
    */
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }


    // int new[n];   // Brute Force 
    // int j=0;
    // for(int i=n-1; i>=0; i--){
    //     new[j++] = arr[i];
    // }
    // printf("Reverse Array is: ");
    // for(int j=0; j<n; j++){
    //     printf("%d ", new[j]);
    // }


    // ==> Best Approach (Two Pointer Approach)

    int low = 0, high = n-1;
    printf("Reverse Array : ");
    while(low <= high){
        // Note: There is no built-in SWAP function in the standard C library. (C++ have)
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low ++;
        high --;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}