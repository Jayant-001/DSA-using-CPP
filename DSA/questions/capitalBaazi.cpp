#include <bits/stdc++.h>
using namespace std;

string toUpper(string str) {

    for (int i = 0; i < str.size(); i++) {
        str[i] = (int)str[i] - 32;
    }

    return str;
}

int main() {

    string str;

    while (cin >> str)
    {
        cout << toUpper(str) << endl;
    }
    


    return 0;
}