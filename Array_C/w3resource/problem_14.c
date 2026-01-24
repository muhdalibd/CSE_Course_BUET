#include <stdio.h>

int main(){
    /*
        14. Insert in Unsorted Array

        Write a program in C to insert values in the array (unsorted list).
        Test Data :
        Input the size of array : 4
        Input 4 elements in the array in ascending order:
        element - 0 : 1
        element - 1 : 8
        element - 2 : 7
        element - 3 : 10
        Input the value to be inserted : 5
        Input the Position, where the value to be inserted :2
        Expected Output :
        The current list of the array :
        1 8 7 10
        After Insert the element the new list is :
        1 5 8 7 10
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

    int num, pst;
    printf("Input the value to be inserted : ");
    scanf("%d", &num);
    printf("Input the Position, where the value to be inserted : ");
    scanf("%d", &pst);

    int narr[n+1];
    for(int i=0; i<=n; i++){
        if(i < pst) narr[i] = arr[i];
        else if(i == pst){
            int x = arr[i];
            narr[pst] = num;
            narr[i+1] = x;
        } else{
            narr[i+1] = arr[i];
        }
    }

    printf("The current list of the array :\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nAfter Insert the element the new list is :\n");
    for(int i=0; i<=n; i++){
        printf("%d ", narr[i]);
    }
    return 0;
}