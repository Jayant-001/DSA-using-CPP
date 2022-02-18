#include <bits/stdc++.h>
using namespace std;

bool matchClose(char t, char tp) {
    if(t == ']' && tp == '[')
        return true;
    else if(t == ')' && tp == '(')
        return true;
    else if(t == '}' && tp == '{')
        return true;
    return false;
}

bool ispar(string x)
    {
        stack<char> s;
        for(int i = 0; i < x.length(); i++) {
            
            if(x[i] == '(' || x[i] == '{' || x[i] == '[') {
                s.push(x[i]);
            }        
            else if(!s.empty()) {
                char temp = s.top();
                if(matchClose(x[i], temp))
                    s.pop();
                else
                    return false;
            }
            else
                return false;
        }
        return s.empty();
    }

int main() {

    string str;
    cin >> str;

    cout << ispar(str);

    return 0;
}