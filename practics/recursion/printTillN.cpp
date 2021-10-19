// Print till N, in increasing order and decreasing order`
#include <iostream>
using namespace std;

void increasingOrder(int n) {

    if(n < 0) 
        return;
    
    increasingOrder(n-1);

    cout << n << " ";
}

void decreasingOrder(int n) {

    if(n < 0)
        return;
    
    cout << n << " ";
    decreasingOrder(n-1);
}

int main() {

    increasingOrder(10);
    cout << endl;
    decreasingOrder(10);
    
    return 0;
}