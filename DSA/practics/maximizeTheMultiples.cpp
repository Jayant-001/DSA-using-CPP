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
	ll n, m, k;
	cin >> n >> m >> k;
	vector<ll> arr(n);
	for(int i= 0; i < n; i++)
		cin >> arr[i];
	
	vector<ll> rem;
	for(auto i : arr) 
		if(i%m != 0)
			rem.push_back(m-(i % m));
		else 
			rem.push_back(0);
	
	sort(rem.begin(), rem.end());
	
	ll ct = 0;
	
	for(auto i : rem) {
		// cout << i << " " ;
		if(i == 0)
			ct++;
		else if(i <= k) {
			ct++;
			k -= i;
		}
	}

	cout << endl;
	cout << ct;
}
 
int32_t main()
{
    solve();
    return 0;
}