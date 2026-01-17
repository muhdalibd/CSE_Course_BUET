#include <stdio.h>

int main(){
    /*
        C Program to Insert an Element in an Array

        ## C arrays have a fixed size, so we cannot dynamically increase their memory.
           However, we can insert an element if the array already have enough memory 
           space to accommodate the new elements

        ## Insert Element at Specific Position
           To insert an element at a specific position, shift all elements to the right
           of the specified position one step to the right. This will create an empty 
           space at the specified position. Then, insert the new element at the
           desired position.
    */
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers : ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int pos, val;
    printf("Enter position & value: ");
    scanf("%d %d", &pos, &val);

    for(int i=n; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = val;

    printf("Final Array is: ");
    for(int j=0; j<=n; j++){
        printf("%d ", arr[j]);
    }

    return 0;
}