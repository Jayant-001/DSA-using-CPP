#include <iostream>
using namespace std;

int pow(int n, int m) {
    int res = 1;
    for(int i = 0; i < m; i++) {
        res *= n;
    }

    return res;
}

int getSymbol(int n, int k) {

    if(n == 1 && k == 1) {
        return 0;
    }

    int len = pow(2, n-1);
    int mid = len/2;

    if(k <= mid) {
        return getSymbol(n-1, k);
    }
    else {
        return !getSymbol(n-1, (k-mid));
    }

}

int main() {

    int n, k;
    cin >> n >> k;

    cout << getSymbol(n, k);

    return 0;
}