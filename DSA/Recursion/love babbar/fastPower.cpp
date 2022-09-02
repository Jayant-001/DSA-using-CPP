#include <bits/stdc++.h>
using namespace std;

int power(int a, int b) {
    if(b == 0)
        return 0;
    if(b == 1) 
        return a;
    return a * power(a, b-1);
}

int fastPower(int a, int b) {
    if(b == 0)
        return 1;
    if(b == 1)
        return a;

    if(b % 2 == 1)
        return a * fastPower(fastPower(a, b/2), 2); 
        // return a * (power(a, b/2) * power(a, b/2));
    else
        return fastPower(fastPower(a, b/2), 2);
        // return (power(a, b/2) * power(a, b/2));
}

int power1(int x,int n){
    // write your code here
    if (n == 0)
        return 1;
    if(n == 1)
        return x;
    
    int pow = power(x, n/2);
    int ans = pow * pow;
    
    if(n % 2 == 1)
        ans *= x;
    return ans;
}

// find a^b
int main() {

    int a, b;
    cin >> a >> b;

    // cout << power(a, b) << endl;
    cout << fastPower(a, b);

    return 0;
}