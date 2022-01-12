#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int leftMax[n];
    int rightMax[n];

    int temp = arr[0];
    // leftMax[0] = -1;
    for(int i = 0; i < n; i++) {
        temp = arr[i] > temp ? arr[i] : temp;
        leftMax[i] = temp;
    }

    temp = arr[n-1];
    for(int i = n-1; i >= 0; i--) {
        temp = arr[i] > temp ? arr[i] : temp;
        rightMax[i] = temp;
    }

    // for(int i = 0; i < n; i++) 
    //     cout << leftMax[i] << " ";
    // cout << endl;
    // for(int i = 0; i < n; i++) 
    //     cout << rightMax[i] << " ";

    int res[n];
    for(int i = 0; i < n; i++) {
        res[i] = min(leftMax[i], rightMax[i]);
        res[i] -= arr[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++) 
        ans += res[i];

    cout << "total trapping water : " << ans;


    return 0;
}