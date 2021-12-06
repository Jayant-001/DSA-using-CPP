#include <iostream>
using namespace std;


void print(string s) {
    int i = 0;
    if (s.length() == 0) return;

    if(s[0] == 'p' && s[1] == 'i') {
        cout << "3.14";
        i+=2;
        
    }
    else {
        cout << s[0];
        i++;
    }

    string rest = s.substr(i);
    print(rest);
}


int main() {

    print("pippxxppiixipi");
    return 0;
}
