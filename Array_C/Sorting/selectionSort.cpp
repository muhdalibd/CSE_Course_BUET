#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main(){
    /*
        Selection Sort ==> repeatedly selecting the smallest (or largest) element from the
            unsorted portion and swapping it with the first unsorted element.
    */
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int arr[n]; // 13 46 24 52 20 9
    cout<<"Enter "<< n <<" elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selectionSort(arr, n);

    cout<<"Sorting array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}