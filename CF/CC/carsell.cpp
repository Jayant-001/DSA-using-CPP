#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007

int main() {

    ll t;
    cin >> t; 
    while(t--) {
        ll n; 
        cin >> n;
        vector<ll> v(n);
        for(ll i = (ll)0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end(), greater<ll>());

        ll profit = 0;
        for(ll i = (ll)0; i < n; i++) {
            profit += max((ll)(v[i] - i), (ll)0);
            profit %= mod;
        }

        cout << profit << endl;
        
    }



    return 0;
}