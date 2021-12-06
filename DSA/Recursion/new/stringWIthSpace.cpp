#include <iostream>
using namespace std;

void printString(string s, int l, int n, string res = "") {

    if(l == n-1) {
        res += s[n-1];
        cout << res << endl;
        return;
    }

    res += s[l];

    // including space
    printString(s, l+1, n, res + " ");

    // excluding space
    printString(s, l+1, n, res);

    return;
}

int main() {

    string s = "abc";

    printString(s, 0, s.size());

    return 0;
}