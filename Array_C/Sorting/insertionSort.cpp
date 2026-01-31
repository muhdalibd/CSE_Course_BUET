#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>curr){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = curr;
    }
}

int main(){
    /*
        Insertion Sort ==> Inserting element of an unsorted list into its correct
            position in a sorted portion of the list..
    */
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    insertionSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}