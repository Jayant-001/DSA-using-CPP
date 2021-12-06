#include <iostream>
using namespace std;

void fact(int num) {

    if(num == 0) {
        return ;
    }

    cout << "before recursive call" << num << endl;
    fact(num-1);

    cout << "after recursive call" << num << endl;

    return;
}

int main() {

    fact(5);

    return 0;
}