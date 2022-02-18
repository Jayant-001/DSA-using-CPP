#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int key) {
    if(s.empty()) {
        s.push(key);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s, key);
    s.push(temp);
}

void reverse(stack<int> &s) {
    if(s.empty())
        return;
    
    int temp = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s, temp);
}

int main() {

    int n;
    cin >> n;
    stack<int> s;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        s.push(t);
    }

    reverse(s);

    while(n--) {
        cout << s.top() << " ";
        s.pop();
    }

    // while(!s.empty()) {
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    return 0;
}

/*
-------------------------Code Studio ---------------------------------
void insertAtBottom(stack<int> &s, int key) {
    if(s.empty()) {
        s.push(key);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s, key);
    s.push(temp);
}

void reverseStack(stack<int> &s) {
    // Write your code here
    if(s.empty())
        return;
    
    int temp = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, temp);
}


*/