#include <iostream>
using namespace std;

int factorial(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            arr[i] = t - i;
        }

        int ct = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] == 1)
                ct++;

        cout << nCr(ct, 2) << endl;
    }

    return 0;
}

// 4
// 6
// 3 5 1 4 6 6
// 3
// 1 2 3
// 4
// 1 3 3 4
// 6
// 1 6 3 4 5 6