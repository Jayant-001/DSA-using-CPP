#include <iostream>
#include <stack>
using namespace std;

void deleteMid(stack<int> &s, int n) {

    if(n == 0) {
        s.pop();
        return;
    }

    int temp = s.top();
    s.pop();

    deleteMid(s, n-1);
    s.push(temp);
    return;
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

    int mid = n - ((n/2) +1);
    deleteMid(s, mid);
    n = s.size();
    for(int i = 0; i < n; i++) {
        cout << s.top() << " ";
        s.pop();
    }


    return 0;
}