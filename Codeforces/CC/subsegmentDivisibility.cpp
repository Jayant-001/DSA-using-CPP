#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {

        int n;
        cin >> n;
        int x = 3;

        for(int i = 0; i < n; i++) {
            cout << x << " ";
            if(i % 2 == 0)
                x++;
            else 
                x += 3;

        }
        cout << endl;
    }

    return 0;
}