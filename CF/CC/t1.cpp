// https://www.codechef.com/START21C/problems/DEVSPORTS
#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        
        int z, y, a, b, c;
        cin >> z >> y >> a >> b >> c;

        z -= y;

        if(z >= (a + b + c))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}