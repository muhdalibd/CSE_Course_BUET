#include <stdio.h>

int main(){
    /*
        7. Merge Two Sorted Arrays (Descending)

        Write a program in C to merge two arrays of the same size sorted in descending order.
        Test Data :
        Input the number of elements to be stored in the first array :3
        Input 3 elements in the array :
        element - 0 : 1
        element - 1 : 2
        element - 2 : 3
        Input the number of elements to be stored in the second array :3
        Input 3 elements in the array :
        element - 0 : 1
        element - 1 : 2
        element - 2 : 3
        Expected Output :
        The merged array in decending order is :
        3 3 2 2 1 1
    */
    int n1;
    printf("Input the number of elements to be stored in the first array : ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Input %d elements in the array :\n", n1);

    for(int i=0; i<n1; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    int n2;
    printf("Input the number of elements to be stored in the second array : ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Input %d elements in the array :\n", n2);

    for(int i=0; i<n2; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr2[i]);
    }

    int m = n1 + n2;
    int marge[m];

    for(int i=0; i<n1; i++){
        marge[i] = arr1[i];
    }
    for(int i=n1; i<m; i++){
        marge[i] = arr2[i-n1];
    }

    for(int i=0; i<m-1; i++){
        for(int j=i+1; j<m; j++){
            if(marge[j] > marge[i]){
                int copy = marge[i];
                marge[i] = marge[j];
                marge[j] = copy;
            }
        }
    }

    printf("The merged array in decending order is :\n");
    for(int i=0; i<m; i++){
        printf("%d ", marge[i]);
    }

    return 0;
}