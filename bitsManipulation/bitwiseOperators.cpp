#include <iostream>
using namespace std;

bool getBit(int num, int i) {
    
    return (num & (1<<i));
}

int setBit(int num, int i) {
    return num | (1<<i);
}

int main() {

    int n = 5;

    // cout << getBit(n, 0);
    cout << setBit(n, 1);

    return 0;
}