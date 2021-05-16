// Q- 
//     Find total sum of all subarrays;

// Approach - 
//     1. Iterate over all the subarrays;

#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            cout << sum << endl;
        }

    }
    
    
    return 0;
}
