#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res[n];
    res[0] = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i-1]) {
            res[i] = res[i-1];
        }
        else {
            res[i] = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }


    return 0;
}