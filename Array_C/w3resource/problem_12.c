#include <stdio.h>

int main(){
    /*
        12. Sort Array Descending

        Write a program in C to sort the elements of the array in descending order.
        Test Data :
        Input the size of array : 3
        Input 3 elements in the array :
        element - 0 : 5
        element - 1 : 9
        element - 2 : 1
        Expected Output :
        Elements of the array in sorted descending order:
        9 5 1
    */
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in the array: \n", n);

    for(int i=0; i<n; i++){
        printf("Element - %d: ",i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                int copy = arr[i];
                arr[i] = arr[j];
                arr[j] = copy;
            }
        }
    }

    printf("Elements of the array in sorted descending order:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}