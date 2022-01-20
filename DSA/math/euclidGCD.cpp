#include <bits/stdc++.h>
using namespace std;

// Formula -> gcd(a, b) = gcd(a-b, b) ------- repeat-------- non negative number will answer
// lcm(a, b) * gcd(a, b) = a*b

// iterative method
int gcdItr(int a, int b) {
    if(a == 0)
        return b;
    if(b == 0)
        return a;

    while(a != b) {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}


// recursive
int gcdRec(int a, int b) {
    if(a == 0)
        return b;
    if(b == 0) 
        return a;

    if(a > b)
        return gcdRec(a-b, b);
    if(a < b)
        return gcdRec(b-a, a);
    else 
        return a;
}

// using % (mod) 
int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

int main() {

    int a, b;
    cin >> a >> b;

    cout << "GCD: " << gcdItr(a, b);
    cout << endl;
    cout << "GCD: " << gcdRec(a, b);
    cout << endl;
    cout << "GCD using mod: " << gcd(a, b);

    return 0;
}