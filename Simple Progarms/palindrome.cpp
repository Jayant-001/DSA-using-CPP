#include <iostream>
using namespace std;

int main() {


    int num ;
    cout << "Enter number to check palindrome: " << endl;
    cin >> num;
    int temp = num;
    int res;

    while(num != 0) {
        res *= 10;
        res += num % 10;
        num /= 10;
    }

    if(res == temp) {
        cout << "Palindrome";
    } else {
        cout << "not palindrome";
    }


    return 0;
}