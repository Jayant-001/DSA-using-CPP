#include <iostream>
using namespace std;

/*
    Tower of Hanoi problem...................................
    n = no. of disks
    s = source pole
    d = destination pole
    h = helper pole
*/

void solve(int n, int s, int d, int h) {

    if(n == 0) {
        cout << "There is no disk" << endl;
        return;
    }

    if(n == 1) {
        cout << "Disk " << n << " moved from " << s << " to " << d << endl;
        return;
    }

    solve(n-1, s, h, d);
    cout << "Disk " << n << " moved from " << s << " to " << d << endl;
    solve(n-1, h, d, s);
    
}

int main() {

    int n;
    cin >> n;

    // solve(no of disks, source, destination, helper);
    solve(n, 1, 3, 2);
    return 0;
}