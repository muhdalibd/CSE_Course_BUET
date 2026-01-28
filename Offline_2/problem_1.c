#include <stdio.h>

void sortArr(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    /*
        Problem 1:  
        Take the size of an array and the elements of the array input from the user.
        Sort all even numbers in ascending order and odd numbers in descending order,
        maintaining their relative positions.
        
        ### Maintaining relative positions means even numbers replace only even positions and
        odd numbers replace only odd positions in the original array.
        Sample Input:  
        5  
        5 2 9 4 1 
        Sample Output: 9 2 5 4 1 
    */

    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    sortArr(arr, n);

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    int j = n-1;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0 && arr[j] % 2 != 0){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j --;
        }
        else if(arr[i] % 2 == 0) continue;
        else if(arr[j] % 2 == 0) j--;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}