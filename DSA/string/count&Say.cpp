#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    int ct = 1;
    char last = s[0];
    string res = "";

    for(int i = 1; i < s.length(); i++) {
        if(last == s[i])
            ct++;
        else {
            res += to_string(ct);
            res.push_back(last);
            ct = 1;
            last = s[i];
        }
    }

    res += to_string(ct);
    res.push_back(last);

    cout << res;

    return 0;
}