#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int key) {

    if(s.empty() || s.top() < key) {
        s.push(key);
        return;
    }

    int temp = s.top();
    s.pop();
    insert(s, key);
    s.push(temp);
}

void sortStack(stack<int> &s) {

    if(s.size() == 0 || s.size() == 1)
    return ;

    int temp = s.top();
    s.pop();
    sortStack(s);
    insert(s, temp);
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

    sortStack(s);

    while(n--) {
        cout << s.top() << " ";
        s.pop();
    }


    return 0;
}