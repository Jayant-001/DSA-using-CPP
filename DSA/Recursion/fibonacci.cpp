#include <iostream>
using namespace std;

int fib(int n, int c) {

    if(n == 0 || n == 1) {
        return c;
    }    

    c++;
    return fib(n-1, c) + fib(n-2, c);

}

int main() {
    
    int n;
    cin >> n;

    cout << fib(n, 0);


    return 0;
}