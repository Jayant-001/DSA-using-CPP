#include <iostream>
using namespace std; 

int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int minIdx = 0;
    int maxIdx= 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] <= arr[minIdx]) 
            minIdx = i;
        
        if(arr[i] > arr[maxIdx])
            maxIdx = i;
    }

    // cout << minIdx << endl << maxIdx << endl;
    int minStep = n-minIdx-1;
    int maxStep = maxIdx;

    if(minIdx < maxIdx) {
        cout << minStep + maxStep-1;
    }
    else {
        cout << minStep + maxStep;
    }

    return 0;
}