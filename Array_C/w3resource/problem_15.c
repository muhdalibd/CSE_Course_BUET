#include <stdio.h>

int main(){
    /*
        15. Delete Element from Array

        Write a program in C to delete an element at a desired position from an array.
        Test Data :
        Input the size of array : 5
        Input 5 elements in the array in ascending order:
        element - 0 : 1
        element - 1 : 2
        element - 2 : 3
        element - 3 : 4
        element - 4 : 5
        Input the position where to delete: 3
        Expected Output :
        The new list is : 1 2 4 5
    */
    int n;
    printf("Input the size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in the array: \n", n);

    for(int i=0; i<n; i++){
        printf("Element - %d: ",i);
        scanf("%d", &arr[i]);
    }

    int pst;
    printf("Input the position where to delete: ");
    scanf("%d", &pst);

    int narr[n-1];
    for(int i=0; i<n; i++){
        if(i == pst){
            narr[i] = arr[i+1];
        } else if(i < pst){
            narr[i] = arr[i];
        } else{
            narr[i-1] = arr[i];
        }
    }

    printf("The current list of the array :\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nAfter Delete the element the new list is :\n");
    for(int i=0; i<n-1; i++){
        printf("%d ", narr[i]);
    }
    return 0;
}