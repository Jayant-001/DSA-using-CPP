#include <iostream>
using namespace std;

void powerSet(string str, int i, string cur) {

    if(i == str.length()) {
        cout << cur << "\n";
        return;
    }

    // inlcluding index character
    powerSet(str, i+1, cur + str[i]);

    // excluding index character
    powerSet(str, i+1, cur);
}

int main() {

    string str;
    cin >> str;

    powerSet(str, 0, "");
    
    return 0;
}


// Time complexity - O(2^n)--------------------------------------[]