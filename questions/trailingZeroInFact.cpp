// Find how many zero in the end of factorial of given number
// Eg. 5! = 120 -> 1 zero in factorial of 5

#include <iostream>
using namespace std;

int main() {

    int num;
    cin >> num;
    int noOfZero = 0;

    for (int i = num; i >= 1; i--) {
        if(num % 5 == 0) {
            noOfZero++;
        }
    }

    cout << noOfZero;

}
