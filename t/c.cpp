#include<bits/stdc++.h>
using namespace std;
string addition(string s, string t) {
    if(s == "")
        return t;
    string ans = "";
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    int i = 0;
    int j = 0;
    
    int carry = 0;
    while(i < s.length() && j < t.length()) {
        int a = s[i]-'0';
        int b = t[j]-'0';
        int temp = a+b+carry;
        ans.push_back(temp%10 + '0');
        carry = temp/10;
        i++;
        j++;
    }
    while(i < s.length()) {
        int a = s[i]-'0';
        int temp = a+carry;
        ans.push_back(temp%10 + '0');
        carry = temp/10;
        i++;
    }
    while(j < t.length()) {
        int a = t[j]-'0';
        int temp = a+carry;
        ans.push_back(temp%10 + '0');
        carry = temp/10;
        j++;
    }
    if(carry != 0)
        ans.push_back(carry+'0');
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    
    string s, t;
    cin >> s >> t;
    string ans = addition(s, t);
    cout << ans;
return 0;
}