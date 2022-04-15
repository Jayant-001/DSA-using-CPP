#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void generate(ll i, ll l, ll r, set<ll> &table) {

    if(i > r)
        return;

    if(i >= l)
        table.insert(i);

    ll t = (i * 10) + 4;

    generate(t, l, r, table);

    ll p = (i * 10) + 7;

    generate(p, l, r, table);

}

int main() {

    ll l, r;
    cin >> l >> r;

    set<ll> table;
    generate(0, l, r, table);

    int i = 0;
    ll sum = 0;
    while(l <= r && !table.empty()) {

        auto itr = table.begin();

        if(*itr >= l && *itr <= r) {
            l++;
            sum += *itr;
        }
        else
            table.erase(table.begin());
    }

    // for(auto i : table)
    //     cout << i << endl;

    // cout << table.size();

    cout << sum;

    return 0;
}