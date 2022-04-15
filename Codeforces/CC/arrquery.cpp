#include <bits/stdc++.h>
using namespace std;
#define lli	long long int

int solve(vector<lli> v, lli n, lli l, lli r, lli x) {
    int ct = 0;
    if(v[r] < x)
        return 0;
    
    while(v[l] < x)
        l++;

    return (r-l+1);
}

int main() {

    lli n, q;
    cin >> n >> q;
    vector<lli> v(n);
    for(lli i = 0; i < n; i++)
        cin >> v[i];

    while(q--) {
        lli l, r, x;
        cin >> l >> r >> x;

        l--;
        r--;
        lli ct = solve(v, n, l, r, x);

        cout << ct << endl;
    }

    return 0;
}