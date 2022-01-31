#include <bits/stdc++.h>
using namespace std;

int main() {

    uint32_t n;
    cin >> n;

    int ct = 0;

    while(n) {
        ct++;
        n = n & (n-1);
    }

    cout << ct;

    return 0;
}