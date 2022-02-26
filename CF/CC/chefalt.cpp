#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int maxsum = 0;
        int sum = 0;
        // for(int i = 0; i < n-2; i+=2) {
        //     sum += (v[i] + v[i+2]);
        // }
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0)
                sum += v[i];
        }

        // cout << sum << endl;
        maxsum = max(sum, maxsum);

        sum = 0;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 1)
                sum += v[i];
        }
        // cout << sum << endl;
        maxsum = max(sum, maxsum);
        cout << maxsum << endl;
    }

    return 0;
}