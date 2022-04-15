#include <iostream>
using namespace std;
#define N 250000
int main() {
    
    int n;
    cin >> n;

    for(int i = 0; i < N; i++) {
        int x = n-(i*4);
        if(x % 7 == 0 && x >= 0) {
            for(int j = 0; j < i; j++)
                cout << "4";
            for(int j = 0;j < x/7;j++)
                cout << "7";
            
            return 0;
        }
    }
    
    cout << "-1";

    return 0;
}
