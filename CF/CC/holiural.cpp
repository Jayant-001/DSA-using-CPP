#include <bits/stdc++.h>
using namespace std;
#define lli	long 

int main() {

    lli t;
    cin >> t;
    long mn = LONG_MAX;
    while(t--) {
        lli n, k;
        cin >> n >> k;

        vector<lli> d(n);
        vector<lli> r(n);
        for(lli i = 0; i < n; i++) {
            cin >> d[i];
        }

        for(lli i = 0; i < n; i++) {
            cin >> r[i];
        }

        for(lli i = 0; i < n; i++) {
            d[i] = ((d[i] * k) + r[i]);
        }

        sort(d.begin(), d.end());
        cout << d[0] << endl;

    }


    return 0;
}