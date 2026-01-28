#include <stdio.h>

void findIntersection(int arr1[], int size1, int arr2[], int size2, int result[], int *count){
    int size = 0;
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(arr1[i] == arr2[j]){
                result[size] = arr1[i];
                size ++;
                break;
            }
        }
    }
    *count = size;
}

int main(){
    /*
        Problem 2: 
        
        Take the size of two arrays and the elements of the arrays input from the user.
        Write a function that finds common elements between two arrays. 
        
        Sample Input:  
        7 
        3 5 9 12 14 18 20 
        5 
        2 3 7 12 18  
        Sample Output: 3 12 18
    */
    int size1, size2;
    
    scanf("%d", &size1);
    int arr1[size1];
    for(int i=0; i<size1; i++){
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &size2);
    int arr2[size2];
    for(int i=0; i<size2; i++){
        scanf("%d", &arr2[i]);
    }

    int size = size1 > size2 ? size2 : size1;
    int result[size];

    int count = 0;
    findIntersection(arr1, size1, arr2, size2, result, &count);

    for(int i=0; i<count; i++){
        printf("%d ", result[i]);
    }

    return 0;
}