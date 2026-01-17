#include <stdio.h>

int main(){
    /*
        C Program to Delete an Element in an Array
    */
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers : ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter position: ");
    scanf("%d", &pos);

    for(int i=pos+1; i<=n-1; i++){
        arr[i-1] = arr[i];
    }

    printf("Final Array is: ");
    for(int j=0; j<n-1; j++){
        printf("%d ", arr[j]);
    }
    return 0;
}