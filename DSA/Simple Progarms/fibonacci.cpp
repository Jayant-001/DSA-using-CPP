#include <iostream>
using namespace std;

int main() {

    int num1 = 0;
    int num2 = 1;
    int nextTerm;

    int n;
    cout << "Enter length for fabonacci series: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << num1 << " ";
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }

    return 0;
}