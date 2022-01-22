#include <bits/stdc++.h>
using namespace std;

// by passing array
bool isSorted(vector<int> arr) {
    if(arr.size() == 1 || arr.size() == 0) 
        return 1;
    
    if(arr[arr.size()-1] >= arr[arr.size()-2]) {
        arr.pop_back();
        return isSorted(arr);
    }
    else 
        return false;
}

// By passing pointer into function
bool isSorted(int *arr, int n) {
    if(n == 0 || n == 1)
        return 1;
    
    if(arr[0] > arr[1])
        return 0;
    else
        isSorted(arr+1, n-1);
}

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int a[n];
    for(int i = 0; i < n; i++)
        a[i] = arr[i];

    isSorted(arr) ? cout << "Sorted" : cout << "Not Sorted";
    cout << endl;
    isSorted(a, n) ? cout << "Sorted" : cout << "Not Sorted";

    return 0;
}
