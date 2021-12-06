#include <iostream>
#include <stack>
using namespace std;

bool check(string str,int l, stack<char> &s) {

    if(l > str.size()-1) {
        return s.empty();
    }

    if(s.empty()){
        s.push(str[l]);
        return check(str, l+1, s);
    }

    if(str[l] == ')' && s.top() == '(') {
        s.pop();
    }
    
    else if(str[l] == '}' && s.top() == '{') {
        s.pop();
    }

    else if(str[l] == ']' && s.top() == '[') {
        s.pop();
    }

    else {
        s.push(str[l]);
    }

    return check(str, l+1, s);

}

int main() {

    string str;
    cin >> str;
    stack<char> s;

    if(check(str, 0, s)) {
        cout << "Balanced";
    }
    else {
        cout << "Unbalanced";
    }

    return 0;
}