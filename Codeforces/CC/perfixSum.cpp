#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll solve(ll num, string s)
{
    ll add = 0;
    for(int i = num; i >= 0; i--)
    {
        ll temp = (int(s[i])-int('0')+add)%10;
        if(temp == 0) continue;
        add += 10 - temp;
    }
    return add;
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        
        ll n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        
        ll l=0;
        ll r = n-1;
        ll ans = 0;
        while(l <= r) {
            ll m = (l+r) / 2;
            if(solve(m,str) > k)
                r = m-1;
            else
            {
                ans = m + 1;
                l = m + 1;
            }
        }
        cout << ans << endl;
    }
}