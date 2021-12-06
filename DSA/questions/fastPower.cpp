// Find a^b int O(logn) complexity

#include <iostream>
using namespace std;

int getPower(int a, int b) {

    int res = 1;

    while(b > 0) {

        if(b&1) {
            res = res * a;
        }
        a = a * a;
        b = b / 2;
    }

    return res;
}


// Using recursion............
int getPower2(int a, int b, int res) {

    // int res = 1;
    if(b <= 0) {
        return res;
    }

    if(b&1) {
        res = res * a;
    }

    return getPower2(a*a, b/2, res);
}

int main() {

    int a, b;
    cin >> a >> b;

    cout << getPower(a, b) << endl;

    cout << "Using recursion : " << getPower2(a, b, 1);

    return 0;
}