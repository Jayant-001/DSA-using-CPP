#include <iostream>
using namespace std;

int main() {

    int n, q;
    cin >> n >> q;
    int **p1 = new int*[n];
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        p1[i] = new int[x];
        for(int j = 0; j < x; j++)
            cin >> p1[i][j];
    }

    for(int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << p1[a][b] << endl;
    }


    return 0;
}