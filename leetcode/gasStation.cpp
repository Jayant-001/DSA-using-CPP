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

bool check(vector<int> gas, vector<int> cost, int idx) {
	
	int n = gas.size();
	int t = 0;
	while(n--) {
		
		if(t+gas[idx] < cost[idx])
			return false;
		t = (t+gas[idx]-cost[idx]);
		idx = (idx+1)%gas.size();
	}
	
	return true;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> gas(n);
	vector<int> cost(n);
	for(int i = 0; i < n; i++)
		cin >> gas[i];
	for(int i = 0; i < n; i++)
		cin >> cost[i];
	
	int ans = 0;
	int total = 0;
	int surplus = 0;
	int S = 0;
	for(int i = 0; i < n; i++) {
		total += gas[i] - cost[i];
		surplus += gas[i] - cost[i];
		if(surplus<0) {
			surplus = 0;
			S = i+1;
		}
	}
	ans = total < 0 ? -1 : S;

	cout << ans;
}
 
int32_t main()
{
    solve();
    return 0;
}