#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int findMinimumCost(string str) {
  // Write your code here
    int n = str.length();
    if(n%2==1)
        return -1;
    
    stack<char> s;
    
    for(int i = 0; i < str.length(); i++) {
        char t = str[i];
        if(t == '{') {
            s.push(t);
        }
        else {
            if(!s.empty()) {
                if(s.top() == '{')
                    s.pop();
                else
                    s.push(t);
            }
            else
                s.push(t);
        }
    }

    if(s.empty())
        return 0;
    
    string temp;
    while(!s.empty()) {
        temp.push_back(s.top());
        s.pop();
    }
    reverse(temp.begin(), temp.end());
    // cout << "- " << temp;

    int ct = 0;
    for(int i = 0; i < temp.size()-1; i += 2) {
        char c = temp[i];
        if(c == '}' && temp[i+1] == '{')
            ct += 2;
        else
            ct++;
    }

    return ct;
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        cout << findMinimumCost(s) << endl;
    }

    return 0;
}