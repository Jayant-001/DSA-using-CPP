#include <iostream>
using namespace std;

// src = from rod;
// dest = destination rod;
// helper = auxiliary rod;

void toh(int n, char src, char dest, char helper, int &step) {

    if (n == 0) return;

    toh(n-1, src, helper, dest, step);
    step++;
    cout << "move disk " << n << " from " << src << " -> " << dest << endl;
    toh(n-1, helper, dest, src, step);
}

int main() {

    int n;
    cin >> n;

    int step = 0;

    toh(n, 'A', 'C', 'B', step);

    cout << endl;
    cout << step;

    return 0;
}