#include <iostream>
using namespace std;

int findPath(int n, int m);

int main() {

    cout << findPath(2,2);


    return 0;
}


int findPath(int n, int m) {

    if(n == 1 || m == 1) {
        return 1;
    }

    return findPath(n-1, m) + findPath(n, m-1);
}