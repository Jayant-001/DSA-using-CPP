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

void solve()
{
	string s;
	cin >> s;
	int h[26] = {0};
	
	for(int i = 0; i < s.length(); i++) 
		h[s[i]-'a']++;
	
	int ct = 0;
	for(int i = 0; i < 26; i++)
		if(h[i] & 1)
			ct++;
	if(ct == 0 || ct&1)
	cout << "First" << endl;
	else
		cout << "Second" << endl;
	// else
	// 	cout << "First" << endl;
}

int32_t main()
{
    solve();
    return 0;
}