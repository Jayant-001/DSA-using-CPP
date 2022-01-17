#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int check(int sum)
{
    int i = 0, p = 0;
    while (p < sum)
    {
        p = pow(2, i);
        i++;
    }
    if (p == sum)
        return 1;
    else
        return 0;
}

int sum(int s, int i, int j, int a[], int n)
{
    int t, asum;
    asum = s;
    for (t = 0; t < n; t++)
        if (t < i && t > j)
            asum += a[i];
    return asum;
}

int main()
{
    // your code goes here

    int att;
    cin >> att;
    while (att--)
    {
        int n;
        cin >> n;
        int a[n], i, c, j, s = 0, as, x, y;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            s += a[i];
        if (check(s))
            cout << "0" << endl;
        else
        {
            c = 1;
            while (1)
            {
                i = 0;
                while (i < n)
                {
                    s = 0;
                    j = i;
                    while (j < n)
                    {
                        s = s + (a[j] * pow(2, c));
                        as = sum(s, i, j, a, n);
                        if (check(as))
                        {
                            x = i;
                            y = j;
                            break;
                        }
                        j++;
                    }
                    i++;
                }
                if (check(as))
                    break;
                c++;
            }
            cout << endl
                 << c << endl;
            cout << (y - x + 1) << " " << pow(2, c) << endl;
            for (int t = 0; t < n; t++)
                if (t >= i)
                    if (t <= j)
                        cout << t << " ";
            cout << endl;
        }
    }
    return 0;
}