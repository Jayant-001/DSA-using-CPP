// https://www.codechef.com/START21C/problems/COVID_19
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {

        int n, m;
        cin >> n >> m;

        n = (n+1)/2;
        m = (m+1)/2;

        cout << n*m << endl;

    }

    return 0;
}