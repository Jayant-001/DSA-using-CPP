#include <iostream>
using namespace std;

int main() {

	string str = "abc ckd dk  dfj";

	string s;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == ' ') {
            continue;
        }
        s.push_back(tolower(str[i]));
    }
    
    cout << s;

	return 0;
}