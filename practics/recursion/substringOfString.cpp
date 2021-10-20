#include <iostream>
using namespace std;

void subString(string str, string res) {

    if(str.length() == 0){
        cout << res << endl;
        return;
    }
    string t = str.substr(1);

    subString(t, res);
    subString(t, res+str[0]);
}

int main() {

    subString("abc", "");

    return 0;
}