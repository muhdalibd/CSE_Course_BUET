#include <stdio.h>

int main(){
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int m;
    printf("Enter students: ");
    scanf("%d", &m);

    for(int i=0; i<m; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    int diff = arr[m-1] - arr[0];
    printf("%d", diff);
    return 0;
}