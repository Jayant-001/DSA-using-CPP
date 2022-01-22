#include <bits/stdc++.h>
using namespace std;

int main() {

    string s1, s2;
    cin >> s1 >> s2;
    string res = "";
    
    int sum = 0;
    int carry = 0;
    
    while(!s1.empty() && !s2.empty()) {

        sum = s1[s1.length()-1] - '0' + s2[s2.length()-1] - '0' + carry;
        s1.pop_back();
        s2.pop_back();

        carry = sum / 2;
        sum = sum % 2;
        res += to_string(sum);
    }

if(s1.length() != 0) {
    while(!s1.empty()) {
        sum = s1[s1.length()-1] - '0' + carry;
        s1.pop_back();
        carry = sum / 2;
        sum = sum % 2;
        res += to_string(sum);
    }
}
if(s2.length() != 0) {
    while(!s2.empty()) {
        sum = s2[s2.length()-1] - '0' + carry;
        s2.pop_back();
        carry = sum / 2;
        sum = sum % 2;
        res += to_string(sum);
    }
}

    if(carry != 0)
        res += to_string(carry);

    reverse(res.begin(), res.end());
    cout << res;

    return 0;
}