#include <stdio.h>

int main(){
    /*
        6. Print Unique Elements

        Write a program in C to print all unique elements in an array.
        Test Data :
        Print all unique elements of an array:
        ------------------------------------------
        Input the number of elements to be stored in the array: 4
        Input 4 elements in the array :
        element - 0 : 3
        element - 1 : 2
        element - 2 : 2
        element - 3 : 5
        Expected Output :
        The unique elements found in the array are:
        3 5
    */
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array :\n", n);

    for(int i=0; i<n; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The unique elements found in the array are:\n");
    for(int i=0; i<n; i++){
        int index = 0;
        for(int j=0; j<n; j++){
            if(i == j) continue;
            else if(arr[i] == arr[j]){
                index = 0;
                break;
            } else{
                index = 1;
                continue;
            }
        }
        if(index == 1){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}