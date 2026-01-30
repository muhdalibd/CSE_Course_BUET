#include <stdio.h>
#include <stdlib.h>

// Comparison function for ascending order (used for evens)
int ascending(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Comparison function for descending order (used for odds)
int descending(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int n;
    
    // Read size of array
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Separate odd and even numbers
    int oddCount = 0, evenCount = 0;
    int isOdd[n]; // 1 if element is odd, 0 if even
    
    // Count and mark
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 1) {
            isOdd[i] = 1;
            oddCount++;
        } else {
            isOdd[i] = 0;
            evenCount++;
        }
    }
    
    // Create arrays for odds and evens
    int odds[oddCount];
    int evens[evenCount];
    int oddIndex = 0, evenIndex = 0;
    
    // Fill odds and evens arrays
    for(int i = 0; i < n; i++) {
        if(isOdd[i]) {
            odds[oddIndex++] = arr[i];
        } else {
            evens[evenIndex++] = arr[i];
        }
    }
    
    // Sort odds in descending order
    qsort(odds, oddCount, sizeof(int), descending);
    
    // Sort evens in ascending order
    qsort(evens, evenCount, sizeof(int), ascending);
    
    // Reset indices for placing back
    oddIndex = 0;
    evenIndex = 0;
    
    // Create result array
    int result[n];
    
    // Place sorted numbers back in original positions
    for(int i = 0; i < n; i++) {
        if(isOdd[i]) {
            result[i] = odds[oddIndex++];
        } else {
            result[i] = evens[evenIndex++];
        }
    }
    
    // Print the result
    printf("Output: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    
    return 0;
}