#include <iostream>
#include <stack>
using namespace std;

void reverse(stack<int> &s);
void insert(stack<int> &s, int n);

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

    for(int i = 0; i < n; i++) {

        cout << s.top() << " ";
        s.pop();
    }


    return 0;
}

void reverse(stack<int> &s) {

    if(s.size() == 1) {
        return;
    }

    int temp = s.top();
    s.pop();

    reverse(s);

    insert(s, temp);
}

void insert(stack<int> &s, int temp) {

    if(s.size() == 0) {
        s.push(temp);
        return;
    }

    int val = s.top();
    s.pop();

    insert(s, temp);
    s.push(val);
}