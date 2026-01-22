#include <stdio.h>

int main(){
    /*
        11. Sort Array Ascending

        Write a program in C to sort elements of an array in ascending order.
        Test Data :
        Input the size of array : 5
        Input 5 elements in the array :
        element - 0 : 2
        element - 1 : 7
        element - 2 : 4
        element - 3 : 5
        element - 4 : 9
        Expected Output :
        Elements of array in sorted ascending order:
        2 4 5 7 9
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
            if(arr[i] > arr[j]){
                int copy = arr[i];
                arr[i] = arr[j];
                arr[j] = copy;
            }
        }
    }
    
    printf("Elements of array in sorted ascending order: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}