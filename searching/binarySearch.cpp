#include <iostream>
using namespace std;

// Recursive approach
int search(int arr[], int target, int start, int end) {

    if(end >= start) {
        int mid = (start + end) / 2;

        if( arr[mid] == target) {
            return mid;
        }

        else if(target > arr[mid]) {
            return search(arr, target, mid+1, end);
        }
        
        else if(target < arr[mid]) {
            return search(arr, target, start, mid-1);
        }

    }

    return -1;
}

int main() {

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }

    int target = 5;
    // cin >> target;
    cout << "Index : " << search(arr, target, 0, n-1);



    return 0;
}