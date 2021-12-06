#include <iostream>
using namespace std;

string replacePi(string s, int start = 0, string res = "") {

    if(start == s.size())
        return res;

    if(s.substr(start, 2) == "pi"){
        res = res + "3.14";
        start += 2;
    }
    else {
        res.push_back(s[start]);
        start++;
    }
    return replacePi(s, start, res);

}

int main() {

    string s;
    // s = "pippxxppiixipi";
    cin >> s;

    cout << replacePi(s);

    return 0;
}
