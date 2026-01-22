#include <stdio.h>

int main(){
    /*
        10. Separate Odd & Even Arrays

        Write a program in C to separate odd and even integers into separate arrays.
        Test Data :
        Input the number of elements to be stored in the array :5
        Input 5 elements in the array :
        element - 0 : 25
        element - 1 : 47
        element - 2 : 42
        element - 3 : 56
        element - 4 : 32
        Expected Output :
        The Even elements are :
        42 56 32
        The Odd elements are :
        25 47
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

    int oddcnt = 0, evencnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            evencnt++;
        } else{
            oddcnt++;
        }
    }

    int odd[oddcnt], even[evencnt];

    oddcnt = 0, evencnt = 0;

    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            even[evencnt++] = arr[i];
        } else{
            odd[oddcnt++] = arr[i];
        }
    }

    printf("The Even elements are : \n");
    for(int i=0; i<evencnt; i++){
        printf("%d ", even[i]);
    }
    printf("\nThe Odd elements are : \n");
    for(int i=0; i<oddcnt; i++){
        printf("%d ", odd[i]);
    }
    
    return 0;
}