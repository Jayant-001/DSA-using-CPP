// Find prime number till N..........

#include <iostream>
using namespace std;


int main() {

    int n;
    cin >> n;

    bool isPrime[n+1];
    std::fill_n(isPrime, n+1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for(int i = 2; i*i <= n; i++) {

        for(int j = 2*i; j <= n; j += i) {
            isPrime[j] = false;
        }
    }

    // for (int i = 0; i <= n; i++) {
    //     // string ans = isPrime[i] ? "true" : "false";
    //     cout << i << " - " << (isPrime[i] ? "prime": "not prime") << endl;
    // }
    
    for(int i = 0; i < n+1; i++)
        if(isPrime[i])
            cout << i << " ";

    return 0;
}