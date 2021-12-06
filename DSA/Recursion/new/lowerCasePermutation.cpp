#include <iostream>
using namespace std;

void solve(string str, string res = "") {

    if(str.size() == 0) {
        cout << res << " ";
        return;
    }

    // handling digit or non-alphabet
    if(!((int)str[0] >= 97 && (int)str[0] <= 122 || (int)str[0] >= 65 && (int)str[0] <= 90)) {
        // cout << "this is number" << endl;
        res.push_back(str[0]);
        str.erase(str.begin()+0);
        solve(str, res);
        return;
    }

    string op1 = res;
    string op2 = res;

    op1.push_back(tolower(str[0]));
    op2.push_back(toupper(str[0]));

    str.erase(str.begin()+0);

    solve(str, op1);
    solve(str, op2);
    return;

}

int main() {

    string str;
    cin >> str;

    solve(str);

    return 0;
}