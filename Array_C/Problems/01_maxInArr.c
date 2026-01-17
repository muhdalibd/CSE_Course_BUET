#include <stdio.h>
// #include <limits.h>

int main(){
    /*
        Finding Maximum Value in an Array in C
    */
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // int maxNum = INT_MIN;
    // for(int i=0; i<n; i++){
    //     if(arr[i] > maxNum){
    //         maxNum = arr[i];
    //     }
    // }
    // printf("Maximum is %d\n", maxNum);


    int maxNum = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    printf("Maximum is %d\n", maxNum);


    // int minNum = INT_MAX;
    // for(int i=0; i<n; i++){
    //     if(arr[i] < minNum){
    //         minNum = arr[i];
    //     }
    // }
    // printf("Maximum is %d\n", minNum);


    int minNum = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }
    printf("Minimum is %d\n", minNum);

    return 0;
}