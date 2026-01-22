#include <stdio.h>

int main(){
    /*
        9. Find Maximum & Minimum

        Write a program in C to find the maximum and minimum elements in an array.
        Test Data :
        Input the number of elements to be stored in the array :3
        Input 3 elements in the array :
        element - 0 : 45
        element - 1 : 25
        element - 2 : 21
        Expected Output :
        Maximum element is : 45
        Minimum element is : 21
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

    int maxNum = arr[0], minNum = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }

    printf("Maximum element is : %d\n", maxNum);
    printf("Minimum element is : %d", minNum);
    return 0;
}