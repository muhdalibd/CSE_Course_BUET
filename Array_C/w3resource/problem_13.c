#include <stdio.h>

int main(){
    /*
        13. Insert in Sorted Array

        Write a program in C to insert the values in the array (sorted list).
        Test Data :
        Input number of elements you want to insert (max 100): 5
        Input 5 elements in the array in ascending order:
        element - 0 : 2
        element - 1 : 3
        element - 2 : 4
        element - 3 : 7
        element - 4 : 8
        Input the value to be inserted : 5
        The existing array list is :
        2 3 4 7 8
        After Insert the list is :
        2 3 4 5 7 8
    */
    int n;
    printf("Input number of elements you want to insert (max 100): ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array in ascending order: \n", n);

    for(int i=0; i<n; i++){
        printf("Element - %d: ",i);
        scanf("%d", &arr[i]);
    }

    int num;
    printf("Input the value to be inserted : ");
    scanf("%d", &num);

    printf("The existing array list is :\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    int narr[n+1];
    int flag = 0;
    for(int i=0; i<=n; i++){
        if(arr[i] < num){
            narr[i] = arr[i];
        } else if(!flag){
            int x = arr[i];
            narr[i] = num;
            narr[i+1] = x;
            flag = 1;
        } else{
            narr[i+1] = arr[i];
        }
    }

    printf("\nAfter Insert the list is :\n");
    for(int i=0; i<=n; i++){
        printf("%d ", narr[i]);
    }
    return 0;
}