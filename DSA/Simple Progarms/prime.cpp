#include <iostream>
using namespace std;

bool checkPrime(int n) {

    if (n <= 2) {
        return true;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {

    int num;
    cout << "Enter a number to check prime or not : " << endl;
    cin >> num;

    if(checkPrime(num)) {
        cout << "prime";
    } else {
        cout << "not prime";
    }

    return 0;
}

