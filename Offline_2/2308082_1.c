#include <stdio.h>

int main() {
    int num;
    printf("Enter array size: ");
    scanf("%d", &num);
    
    int arr[num];
    printf("Enter %d elements: ", num);
    for(int i=0; i<num; i++) {
        scanf("%d", &arr[i]);
    }
    
    int odds[num], evens[num];
    int oddCount = 0, evenCount = 0;
    
    for(int i=0; i<num; i++) {
        if(arr[i] % 2 == 0) {
            evens[evenCount++] = arr[i];
        } else {
            odds[oddCount++] = arr[i];
        }
    }
    
    for(int i=0; i<evenCount; i++) {
        for(int j=i+1; j<evenCount; j++) {
            if(evens[i] > evens[j]) {
                int temp = evens[i];
                evens[i] = evens[j];
                evens[j] = temp;
            }
        }
    }
     
    for(int i=0; i<oddCount; i++) {
        for(int j=i+1; j<oddCount; j++) {
            if(odds[i] < odds[j]) {
                int temp = odds[i];
                odds[i] = odds[j];
                odds[j] = temp;
            }
        }
    }
    
    int ei = 0, oi = 0;
    for(int i=0; i<num; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", evens[ei++]);
        } else {
            printf("%d ", odds[oi++]);
        }
    }
    
    return 0;
}