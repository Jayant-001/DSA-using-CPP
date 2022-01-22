#include <bits/stdc++.h>
using namespace std;

// using extra space
string rev(string s, string res) {
    if(s.empty())
        return res;

    res.push_back(s[s.length()-1]);
    s.pop_back();
    return rev(s, res);
}

// by swaping char's
void rev(string &s, int i, int j) {
    if(i > j) 
        return;

    swap(s[i], s[j]);
    i++;
    j--;
    rev(s, i, j);
}

int main() {

    string s;
    cin >> s;

    cout << rev(s, "") << endl;

    rev(s, 0, s.length()-1);
    cout << s;

    return 0;
}