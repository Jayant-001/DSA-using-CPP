#include <iostream>
using namespace std;

int main() {

    int n; 
    cout << "Enter a number : " << endl;
    cin >> n;
    int res;

    for (int i = 1; i <= n; i++) {
        res += i;
    }

    cout << res << endl;

    cout << "OR using formula" << endl;

    int sum = ( n * (n+1) ) / 2;

    cout << sum;


    return 0;
}