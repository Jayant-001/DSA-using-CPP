#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define lli				long long int
#define vi              vector<int>
#define vs				vector<string>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1e9+7
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;

bool checkAll(string s, int i, int j) {
	
	int r = 0;
	int b = 0;
	if(j == s.length()-1)
		j++;
	for(int k = i; k < j; k++) {
		if(s[k] == 'R')
			r++;
		if(s[k] == 'B')
			b++;
	}
	if(r == 0 && b == 0)
		return true;
	if(r >= 1 && b >= 1)
		return true;
	return false;
}

bool allSame(string s) {
	int n = s.length();
	int w = 0;
	int r = 0;
	int b = 0;
	for(auto i : s) {
		if(i == 'W')
			w++;
		else if(i == 'B')
			b++;
		else if(i == 'R')
			r++;
	}
	if(w == n || r == b || b == b)
		return false;
	return true;
}

void solve()
{
	w(t) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		bool c = true;
		
		if(n <= 1)
			cout << "NO" << endl;
		else if(n == 2 && (s != "RB" && s != "BR"))
			cout << "NO" << endl;
		else if(allSame(s))
			cout << "YES" << endl;
		else {
			
			int i = 0;	
			for(int j = 0; j < s.length(); j++) {
				if(s[j] == 'W' || j == s.length()) {
					c = checkAll(s, i, j);
					// debug(i);
					// debug(j);
					// debug(c);
					if(c == false) {
						cout << "NO" << endl;
						break;
					}
					i = j;
				}
			}
			
		if(c)
		cout << "YES" << endl;
		}
	// cout << "----------" << endl;
	}
}

int32_t main()
{
    solve();
    return 0;
}