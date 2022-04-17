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
	ll n;
	cin >> n;
	vector<ll> arr(n);
	for(ll i = 0; i < n; i++)
		cin >> arr[i];
	
	int odd = 0, even = 0, sum = 0;
	for(auto i : arr) {
		if(i&1)
			odd++;
		else
			even++;
		sum += i;
	}
	
	if(sum&1) {
		cout << odd;
	}
	else
		cout << even;
}
 
int32_t main()
{
    solve();
    return 0;
}