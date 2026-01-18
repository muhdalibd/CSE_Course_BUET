#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int leftElement(vector<int>& arr) {
    bool removeMax = true;  // Start with removing max
    
    while (arr.size() > 1) {
        int maxNum = arr[0];
        int minNum = arr[0];
        int maxIt = 0;
        int minIt = 0;
        
        // Find current max and min in the CURRENT array
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > maxNum) {
                maxNum = arr[i];
                maxIt = i;
            }
            if (arr[i] < minNum) {
                minNum = arr[i];
                minIt = i;
            }
        }
        
        if (removeMax) {
            // Remove maximum element
            arr.erase(arr.begin() + maxIt);
            removeMax = false;  // Next remove min
        } else {
            // Remove minimum element
            arr.erase(arr.begin() + minIt);
            removeMax = true;   // Next remove max
        }
    }
    
    return arr[0];
}

int main() {
    vector<int> arr = {7, 8, 3, 4, 2, 9, 5};
    cout << "Final remaining element: " << leftElement(arr) << endl;
    return 0;
}