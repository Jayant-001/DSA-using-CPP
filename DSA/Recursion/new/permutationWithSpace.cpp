#include <bits/stdc++.h>
using namespace std;

void solve(string str, int l, string res) {

    if(l == str.size()) {
        cout << res << ", ";
        return ;
    }

    // string op1 = res;
    // string op2 = res;

    // op2 += " " + str[l];

    solve(str, l+1, res+" " + str[l]);
    solve(str, l+1, res + str[l]);
    return;
}

int main() {

    string str;
    cin >> str;

    string op = "";
    op += str[0];
    solve(str, 1, op);

    return 0;
}