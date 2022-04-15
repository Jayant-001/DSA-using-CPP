#include <bits/stdc++.h>
using namespace std;

string fun(string s)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'H' or s[i] == 'Q' or s[i] == '9')
        {
            return "YES";
        }
    }
    return "NO";
}

int main()
{

    string s;
    cin >> s;

    cout << fun(s);

    return 0;
}