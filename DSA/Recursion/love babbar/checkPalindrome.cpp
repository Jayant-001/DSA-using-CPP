#include <bits/stdc++.h>
using namespace std;

bool check(string s, int l, int r) {
    if(l > r)
        return true;
    
    if(s[l] != s[r])
        return false;
    else
        return check(s, l+1, r-1);

}

int main() {

    string s;
    cin >> s;

    check(s, 0, s.length()-1) ? cout << "Palindrome" : cout << "Not Palindrome";

    return 0;
}