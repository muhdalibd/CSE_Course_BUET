#include <stdio.h>

int main(){
    /*
        8. Frequency of Array Elements

        Write a program in C to count the frequency of each element of an array.
        Test Data :
        Input the number of elements to be stored in the array :3
        Input 3 elements in the array :
        element - 0 : 25
        element - 1 : 12
        element - 2 : 43
        Expected Output :
        The frequency of all elements of an array :
        25 occurs 1 times
        12 occurs 1 times
        43 occurs 1 times
    */
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array :\n", n);

    for(int i=0; i<n; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The frequency of all elements of an array :\n");

    int frq[n];
    for(int i=0; i<n; i++){
        frq[i] = 0;
    }

    for(int i=0; i<n; i++){
        if(frq[i] == 1) continue;
        int count = 1;
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count ++;
                frq[j] = 1;
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}