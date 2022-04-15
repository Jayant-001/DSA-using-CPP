#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int m, x;
        cin >> m >> x;
        m--;
        int arr[x];
        arr[0] = 1;
        int z;
        for(int i = 1; i < x; i++) {
            z = (m%(i+1)) + 1;
            if(arr[i-1] < z)
                arr[i] = arr[i-1];
            else
                arr[i] = arr[i-1] + 1;
        }
        for(int i = 0; i < x; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}