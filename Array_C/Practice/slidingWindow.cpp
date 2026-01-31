#include <iostream>
using namespace std;

int main(){
    int arr[] = {3, 8, 2, 5, 7, 6, 12};
    int n = sizeof(arr)/sizeof(arr[0]);

    int windowSize;
    printf("Enter window size: ");
    scanf("%d", &windowSize);

    int currentSum = 0;
    for(int i=0; i<windowSize; i++){
        currentSum += arr[i];
    }

    int windowSum = currentSum;
    for(int i=0; i<n-windowSize; i++){
        currentSum = currentSum + arr[i+windowSize-1] - arr[i-1];
        if(currentSum > windowSum){
            windowSum = currentSum;
        }
    }
    return 0;
}