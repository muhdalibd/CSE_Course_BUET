#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    bool swaped;
    for(int i=0; i<n-1; i++){
        swaped = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaped = true;
            }
        }
        if(!swaped){
            break;
        }
    }
}

int main(){
    /*
        Bubble Sort ==> repeatedly swapping the adjacent elements if they are in the
        wrong order.
            ==> 64 25 11 22 12 90 34
                11 12 22 25 34 64 90
        This algorithm is notefficient for large data sets as its average
        and worst-case time complexity are quite high.
    */
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bubbleSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}