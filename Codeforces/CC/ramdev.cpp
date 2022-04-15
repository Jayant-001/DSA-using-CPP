#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    ll l, b;
    cin >> l >> b;
    ll n;
    cin >> n;
    ll sum = 0; 
    while(n--) {

        ll L, B;
        cin >> L >> B;

        ll hrz = ( (L / l) * (B / b));
        ll ver = ( (L / b) * (B / l));

        sum += (max (hrz, ver));

    }

    cout << sum << endl;


    return 0;
}