#include <iostream>
using namespace std;

void solve(string str, string res) {

    if(str.size() == 0) {
        cout << res << " ";
        return;
    }

    string op1 = res;
    string op2 = res;

    op1.push_back(toupper(str[0]));
    op2.push_back(str[0]);

    str.erase(str.begin()+0);

    solve(str, op1);
    solve(str, op2);
    return;
}

int main() {

    string s;
    cin >> s;

    solve(s, "");

    return 0;
}