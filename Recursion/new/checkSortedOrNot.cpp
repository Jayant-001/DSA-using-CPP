#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> arr, int index) {

    if(index >= arr.size()-1) {
        return true;
    }

    if(arr[index] > arr[index+1]) {
        return false;
    }
    
    return checkSorted(arr, index+1);
}

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    if(checkSorted(arr, 0)) {
        cout << "Array is sorted.";
    }
    else {
        cout << "Array is unsorted.";
    }


    return 0;
}