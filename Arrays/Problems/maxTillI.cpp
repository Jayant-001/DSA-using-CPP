// Q- max till i...

// Approach : 
//     1. Keep a variable max which stores the maximum till i^th element;
//     2. Iterate over the array and update;

#include <iostream>
using namespace std;

int main() {

    int arr[] = {0, -9, 1, 3, -4, 5};
    // int arr[] = {1, 0, 5, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res[n];

    int max = arr[0];

    for (int i = 0; i < n; i++) {
        
        while(max < arr[i]){
            max = arr[i];
        }
        res[i] = max;
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }


    return 0;
}