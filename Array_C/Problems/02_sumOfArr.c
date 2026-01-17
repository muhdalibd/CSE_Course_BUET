#include <stdio.h>

int main(){
    /*
        C Program to Calculate Sum of Array Elements
    */
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    printf("Summation is %d\n", sum);
    return 0;
}