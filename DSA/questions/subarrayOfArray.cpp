#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            for(int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
        
            cout << endl;
        }
    }

    return 0;
}

/*

A subarray is a contiguous part of array. An array that is inside another array. 
For example, consider the array [1, 2, 3, 4], There are 10 non-empty sub-arrays. 
The subarrays are (1), (2), (3), (4), (1,2), (2,3), (3,4), (1,2,3), (2,3,4) and (1,2,3,4). 
In general, for an array/string of size n, there are n*(n+1)/2 non-empty subarrays/substrings.

*/