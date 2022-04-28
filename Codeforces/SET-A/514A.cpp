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
	
	int c = s[0] - '0';
	// cout << c;
	if(9-c < c && 9-c != 0)
		cout << 9-c;
	else
		cout << c;
	
	for(int i = 1; i < s.length(); i++) {
		int t = s[i] - '0';
		if(9-t < t)
			cout << 9-t;
		else
			cout << t;
	}
	
}
 
int32_t main()
{
    solve();
    return 0;
}