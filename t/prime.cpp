#include <bits/stdc++.h>
using namespace std;
#define ll long long

void primeFactors(ll n, vector<ll> &factors)
{
    
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n = n/2;
    }
    
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        
        while (n % i == 0)
        {
            factors.push_back(i);
            n = n/i;
        }
    }
    
    if (n > 2)
        factors.push_back(n);
}

bool checkSum(ll n, vector<ll> factors) {
    ll sum = 0;
    for(auto i : factors)
        sum += i;
    return sum == n;
}

int main() {
    

    ll n;
    cin >> n;
    
    for(ll i = 2; i <= n; i++) {
        vector<ll> factors;
        primeFactors(i, factors);

        if(checkSum(i, factors))
            cout << i << " ";
    }

    return 0;
}