#include <iostream>
using namespace std;

void change(int a) {
    a = 34;
    cout << "In the function - " << a << endl;
}

int main() {

    int a = 20;
    cout << a << endl;
    change(a);
    cout << a;

    return 0;
}