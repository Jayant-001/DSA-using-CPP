// https://www.codechef.com/START21C/problems/CHEFGRD
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n, x, y;
        cin >> n >> x >> y;

        if((x%2 == 0 && y%2 ==1) || (x%2==1 && y%2==0))
            cout << 1 << endl;
        else 
            cout << 0 << endl;
    }


    return 0;
}