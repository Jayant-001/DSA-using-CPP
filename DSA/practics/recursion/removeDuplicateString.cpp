#include <iostream>
using namespace std;

string remove(string str) {

    if(str.size() == 0)
        return "";

    char ch = str[0];
    string ans = remove(str.substr(1));

    if(ch == ans[0])
        return ans;
    return ch+ans;

}

int main() {

    string str = "aaaabbccccddeee";

    cout << remove(str);

    return 0;
}