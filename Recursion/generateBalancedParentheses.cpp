#include <iostream>
#include <vector>
using namespace std;

void solve(int open, int close, string op, vector<string> &v) {

    if(open == 0 && close == 0) {
        v.push_back(op);
        return;
    }

    if(open != 0) {
        string op1 = op;
        op1 += "(";

        solve(open-1, close, op1, v);
    }

    if(close > open) {
        string op1 = op;
        op += ")";
        solve(open, close-1, op, v);
    }

}

int main() {

    int n;
    cin >> n;

    int open = n;
    int close = n;
    string op = "";
    vector<string> v;

    solve(open, close, op, v);

    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }

    return 0;
}