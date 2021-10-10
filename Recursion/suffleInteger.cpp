#include <iostream>
using namespace std;

void suffle(int arr[], int n, int i) {

    if(i == n-1) {
        return;
    }

}

int main() {

    int n;
    cin >> n;

    int arr[n], res[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    suffle(arr, n, 0);

    return 0;
}