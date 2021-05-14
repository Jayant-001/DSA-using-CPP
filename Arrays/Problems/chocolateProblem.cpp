#include <iostream>
using namespace std;

/*
we have 15 rs and
price of 1 chocolate = 1rs
3 wrapper = 1 chocolate
calculate total no of chocolate...
*/

int main() {

    int rs = 15;
    int choco = rs;
    int wrapper = choco; 

    while (wrapper >= 3) {
        int temp = wrapper / 3;     // 5
        choco += temp;              // 20
        wrapper = temp + (wrapper % 3);             // 5
    }

    cout << choco;

    return 0;
}
