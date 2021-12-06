#include <iostream>
using namespace std;

bool checkSorted(int arr[], int s, int n) {

    if(n == 1 || s == n)
        return true;

    if(arr[s] >= arr[s-1])
        return checkSorted(arr, s+1, n);
    else 
        return false;

}

int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << checkSorted(arr, 1, n);

    return 0;
}