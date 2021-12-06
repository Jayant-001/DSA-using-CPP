#include <iostream>
using namespace std;

int main() {

    cout << "hello world";

    int n1, n2, n3;
    n1 = 3;
    n2 = 4;
    n3 = 3;

    int a[n1][n2] = 
    {
        {2,4,2,1},
        {8,4,3,6},
        {1,7,9,5},
    };

    int b[n2][n3] = 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {4,5,6},
    };

    int ans[n1][n3];

    for (int i = 0; i < n1; i++ )
    {
        for (int j = 0; j < n3; j++) 
        {
            ans[i][j] = 0;
        }
    }


    // multiplication......................

    for (int i = 0; i < n1; i++) 
    {
        for (int j = 0; i < n3; j++) 
        {
            for (int k = 0; k < n2; k++) {

                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }


    // print resultant array............

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++) 
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}