#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int arr[], int n, int k) {
    
    for(int i = 0; i < n-2; i++) {

        int y = i+1;
        int z = n-1;
        while(y<z) {
            if(k-arr[i] == arr[y]+arr[z]) {
                return true;
            }
            else if(k-arr[i] > arr[y]+arr[z]) {
                y++;
            }
            else
                z--;
        }
    }

    return false;
}

int main() {

    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    sort(arr, arr+n);

    cout << find3Numbers(arr, n, k);

    return 0;
}