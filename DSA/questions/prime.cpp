#include <bits/stdc++.h>
using namespace std;


bool checkPrime(int n) {

    if (n == 0 || n == 1) {
        return false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                return false;
                break;
            }
        }
    }

    return true;

}

int main() {

    string str;
    cin >> str;

    int sum = 0;
// 76 98 65 120 80 83 
    for (int i = 0; i < str.size(); i++) {
        
        // upper case---
        if(str[i] >= 'A' && str[i] <= 'Z') {
            
            str[i] = (int)str[i] + 32;

        }

        // lower case -------
        else if(str[i] >= 'a' && str[i] <= 'z') {
            
            str[i] = (int)str[i] - 32;

        }

        if(str[i] >= 'A' && str[i] <= 'Z') {
            sum += (int)str[i];
        }
        else {
            sum -= (int)str[i];
        }
    }


    cout << checkPrime(abs(sum));

    return 0;
}