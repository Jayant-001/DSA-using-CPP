#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {

        int n, a;
        cin >> n >> a;

        // if bitwise AND is odd case............
        if(a % 2 == 1) {
            if(n % 2 == 1) 
                cout << "Odd" << endl;
            else 
                cout << "Even" << endl;
            continue;
        }
        // if there are only one element in an array
        if (n == 1) {
             if(a % 2 == 1) 
                cout << "Odd" << endl;
            else 
                cout << "Even" << endl;
            continue;
        }
        // if there are more than one element and Bitwise AND is Even that means it is impossible to say
        cout << "Impossible" << endl;
    }



    return 0;
}