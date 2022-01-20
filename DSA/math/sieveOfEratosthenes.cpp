#include <bits/stdc++.h>
using namespace std;
int M = 1e9+7;

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

    for(auto it : prime) 
    cout << it << " ";
    cout << endl << endl;

    cout << "Total count: " << count << endl;
    long long prd = 1;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i]){
            cout << i << " ";

            // prd = (prd*i) % M;
            int t1 = prd%M;
            int t2 = i%M;
            prd = (t1 * t2) % M;
            cout << t1 << " - " << t2 << endl;
            prd = ((prd%M)*(i%M))%M;
        }
    }
    cout << endl << prd;

    return 0;
}

// 1. (a+b)%m = ((a%m)+(b%m))%m
// 2. (a*b)%m = ((a%m)*(b%m))%m
// 3. (a-b)%m = ((a%m)-(b%m)+m)%m