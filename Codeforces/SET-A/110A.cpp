#include <bits/stdc++.h>
using namespace std;

bool fun(long long n)
{
	bool check = true;
	while(n) {
		int t = n%10;
		if(!(t == 4 || t == 7))
        {
            check = false;
            break;
        }
		n /= 10;
	}
    return check;
}

void solve()
{
	string s;
	cin >> s;
	int ct = 0;
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == '4' || s[i] == '7') {
            ct++;
        }
	}
	// cout << ct;
	if (ct == 4 || ct == 7)
		cout << "YES";
	else
		cout << "NO";
}

int main()
{
	solve();
	return 0;
}