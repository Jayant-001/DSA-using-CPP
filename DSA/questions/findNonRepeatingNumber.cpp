// Find non-repeating number in given array.

#include <iostream>
using namespace std;

// If there is only one non-repeating number.......
int findNum(int arr[], int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = res^arr[i];
    }

    return res;
}

int main() {

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    cout << "Non repeating number : " << findNum(arr, n);

    return 0;
}