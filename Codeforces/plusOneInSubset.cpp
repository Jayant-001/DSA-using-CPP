#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {

        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i = 0; i < n; i++) {
            mn = arr[i] < mn ? arr[i] : mn;
            mx = arr[i] > mx ? arr[i] : mx;
        }

        cout << mx - mn << endl;
    }

    return 0;
}