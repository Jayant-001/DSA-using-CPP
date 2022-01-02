#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> res;
    res.push_back(1);
    for(int i = 2; i <= n; i++) {
        int carry = 0;
        for(int k = 0; k < res.size(); k++) {
            int val = res[k]*i+carry;
            res[k] = val%10;
            carry = val/10;
        }
        while(carry != 0) {
            res.push_back(carry%10);
            carry /= 10;
        }
    }
    reverse(res.begin(), res.end());
    for(int i = 0; i < res.size(); i++)
        cout << res[i];

    return 0;
}