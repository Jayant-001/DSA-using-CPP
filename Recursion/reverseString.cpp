#include <iostream>
using namespace std;

void print(string s, int n) {

    if (n == 0) return;

    print(s, n-1);
    cout << s[n-1];
}

int main() {

    print("jayant", 6);


    return 0;
}