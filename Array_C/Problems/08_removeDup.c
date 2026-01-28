#include <stdio.h>

int main(){
    int arr[] ={1, 1, 2, 2, 2, 3, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[++i] = arr[j];
        }
    }

    for(int k=0; k<=i; k++){
        printf("%d ", arr[k]);
    }
    return 0;
}