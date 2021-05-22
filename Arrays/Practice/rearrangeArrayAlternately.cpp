#include <iostream>
using namespace std;

int main() {

    int n = 6;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans[n];

    int i = 0; 
    int j = n-1;

    for (int k = 0; k < n; k++) {

        if (k % 2 == 0) {
            ans[k] = arr[j];
            j--;
        }

        if (k % 2 == 1) {
            ans[k] = arr[i];
            i++;
        }

    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }


    return 0;
}