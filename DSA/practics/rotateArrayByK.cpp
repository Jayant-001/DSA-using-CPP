#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int l, int r) {

    while(l <= r) {
        int t = arr[l];
        arr[l] = arr[r];
        arr[r] = t;
        l++;
        r--;
    }
}

int main() {

    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];


    // optimal solutino
    k = k%10;
    reverse(arr, 0, n-k-1);
    reverse(arr, n-k, n-1);
    reverse(arr, 0, n-1);

    // ----------------------------------------------------brute force approach----------------------------
    // while(k--) {
    //     int t = arr[n-1];
    //     for(int i = n-1; i > 0; i--) {
    //         arr[i] = arr[i-1];
    //     }
    //     arr[0] = t;
    // }

    for(int i = 0 ;i < n; i++)
        cout << arr[i] << " ";

    return 0;
}