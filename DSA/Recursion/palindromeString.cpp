#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i);

int main() {

    string str;
    cin >> str;

    cout << checkPalindrome(str, 0);

    return 0;
}


bool checkPalindrome(string str, int i) {

    int i2 = (str.length()-i-1);

    if(i >= (str.length() / 2)) {
        return true;
    }

    if(str[i] != str[i2]) {
        return false;
    }

    return checkPalindrome(str, ++i);

}