// https://www.codingninjas.com/codestudio/problems/redundant-brackets_975473?leftPanelTab=0
#include <bits/stdc++.h>
using namespace std;

bool checkRedudant(string str) {

    stack<char> s;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
            s.push(str[i]);
        }
        else {

            if(str[i] == ')') {
                bool isRedudant = true;
                while(s.top() != '(') {
                    if(s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/')
                        isRedudant = false;
                    s.pop();
                }
                s.pop();
                if(isRedudant) return true;
            }
            
        }
    }
    return false;
}

int main() {

    string str;
    cin >> str;

    stack<char> s;
    cout << checkRedudant(str);

    return 0;
}