#include <stdio.h>

int main(){
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}