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

int power(int n) {
	int ans = 1;
	while(n--) 
		ans = (ans*2)%100000007;
	return ans;
}

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	map<char, int> mp;
	for(auto i : s) {
		mp[i]++;
	}
	
	int ans = 1;
	int ct = 0;
	for(auto i : s) {
		if(i == 'c' || i == 'g' || i == 'l' || i == 'r')
			ct++;
	}
	ans = power(ct);
	if(ans ==0)
		ans = 1;
	cout << ans << endl;
	
}
 
int32_t main()
{
	w(t) {
	    solve();
    }
    return 0;
}