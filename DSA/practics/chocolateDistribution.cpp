#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr+n);
    int i = 0;
    int j = k-1;
    int ans = arr[j]-arr[i];
    while(j < n) {
        ans = min(ans, arr[j]-arr[i]);
        i++;
        j++;
    }

    cout << ans;

    return 0;
}