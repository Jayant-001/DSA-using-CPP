// Given x, n, m 
// find x^n mod M
#include <bits/stdc++.h>
using namespace std;

int power(int a, int n, int m) {
    if(n == 1) 
        return a%m;
    
    return (1LL*a * power( a, n-1, m))% m;
}

int fastPower(int x, int n, int m) {
    int res = 1;

    while(n > 0) {
        if(n % 2 == 1) 
            res = (1LL * (res%m) * (x%m)) % m;
        x = (1LL * (x%m) * (x%m)) % m;
        n = n>>1; 
    }

    return res;
}

int main() {
    
    int t; 
    cin >> t;

    while(t--) {   
        int a, n, m;
        cin >> a >> n >> m;
        cout << power(a, n, m) << " ";
        cout << fastPower(a, n, m);
        cout << endl;
    }

    return 0;
}