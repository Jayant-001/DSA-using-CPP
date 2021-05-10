#include <iostream>
using namespace std;

int fact(int n) {
    int result = 1;

    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    
    return result;
}


int main() {

    int n, r, result;
    cout << "ENter value of n, r" << endl;
    cin >> n >> r;

    result = fact(n) / (fact(n-r) * fact(r));
    cout << result;

    return 0;
}