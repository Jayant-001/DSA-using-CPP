#include <iostream>
using namespace std;

void permutation(string str, string res) {

    if (str.length() == 0) {
        cout << res << endl;
        return;
    }
    for(int i = 0; i < str.length(); i++) {
        char t = str[i];
        string ros = str.substr(0, i) + str.substr(i+1);

        permutation(ros, res+t);
    }
}

int main() {

    permutation("abc", "");

    return 0;
}