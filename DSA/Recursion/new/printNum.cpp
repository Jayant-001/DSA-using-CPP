#include <iostream>
using namespace std;

void print(int n) {

    if(n == 1) {
        cout << n << " ";
        return ;
    }

    print(n-1);
    cout << n << " ";
}

void prt(int a, int b) {
    if(a == b) {
        return;
    }
    cout << ++a << " ";
    prt(a, b);
}

void printToOne(int x) {

    if(x == 0) {
        return;
    }
    cout << x << " "; 
    printToOne(x-1);
}



int main() {

    // print(10);
    // prt(0, 4);
    printToOne(12);
    
    return 0;
}