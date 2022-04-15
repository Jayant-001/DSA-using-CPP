#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        if(s.find("10") != string::npos || s.find("11") != string::npos)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }

    return 0;
}