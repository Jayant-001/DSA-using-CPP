#include <iostream>
using namespace std;

int main() {

    string s1, s2;
    cin >> s1 >> s2;
    string res = "";

    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] == s2[i])
            res.push_back('0');
        else
            res.push_back('1');
    }

    cout << res;

    return 0;
}