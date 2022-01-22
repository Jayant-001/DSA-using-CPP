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

    if(b&&1)
        return a * power(power(a, b/2), 2); 
        // return a * (power(a, b/2) * power(a, b/2));
    else
        return power(power(a, b/2), 2);
        // return (power(a, b/2) * power(a, b/2));
}

// find a^b
int main() {

    int a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;
    cout << fastPower(a, b);

    return 0;
}