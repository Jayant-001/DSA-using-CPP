#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        int totalMax = INT_MIN;
        int curMax;
        cin >> n >> m;
        while(n--) {
        int mn = INT_MAX;
        int mx = INT_MIN;
            for(int i = 0; i < m; i++) {
                int a;
                cin >> a;
                mn = min(a, mn);
                mx = max(a, mx);
                
            }
            curMax = mx - mn;
            totalMax = max(curMax, totalMax);
        }

        cout << totalMax << endl;
    }



    return 0;
}