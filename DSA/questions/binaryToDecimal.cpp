#include <bits/stdc++.h>
using namespace std;

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}


int main() {

    // int t;
    // cin >> t;

    // while(t--) {
    //     int num;
    //     cin >> num;

        cout << convertBinaryToDecimal(00110010100011101010000) << endl;
    // }

    return 0;
}