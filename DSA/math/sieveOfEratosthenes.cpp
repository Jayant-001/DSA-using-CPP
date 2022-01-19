#include <bits/stdc++.h>
using namespace std;

// prime till n
int main()
{

    int n;
    cin >> n;
    int count = 0;

    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i <= n; i++)
    {

        if (prime[i])
        {
            count++;

            for (int j = i * 2; j <= n; j += i)
                prime[j] = false;
        }
    }

    cout << "Total count: " << count << endl;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            cout << i << " ";
    }

    return 0;
}