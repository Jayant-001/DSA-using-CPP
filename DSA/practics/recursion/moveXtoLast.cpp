#include <iostream>
using namespace std;

string moveX(string str){
    
    if(str.length() == 0)
        return "";

    char ch = str[0];
    string ans = moveX(str.substr(1));

    if(ch == 'x')
        return ans + "x";
    return ch + ans;
}

int main() {

    string str;
    cin >> str;

    cout << moveX(str);

    return 0;
}