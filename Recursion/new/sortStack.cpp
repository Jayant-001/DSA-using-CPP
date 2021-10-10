#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &s, int n);
void sort(stack<int> &s);


int main() {

    int n;
    cin >> n;

    stack<int> s;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        s.push(t);
    }

    sort(s);

    for(int i = 0; i < n; i++) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}


void sort(stack<int> &s) {

    if(s.size() == 1) {
        return;
    }

    int val = s.top();
    s.pop();

    sort(s);

    insert(s, val);
}


void insert(stack<int> &s, int n){

    if(s.size() == 0 || s.top() <= n) {
        s.push(n);
        return;
    }

    int temp = s.top();
    s.pop();

    insert(s, n);

    s.push(temp);
    return;

}