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
#define debug(x) cout << #x << "->" << x << endl;

void solve()
{
	int n; cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
		
	map<int,int> mp;
	for(auto i : arr)
		mp[i]++;
	vector<int> res;
	for(auto i : mp)
		res.push_back(i.second);
	sort(res.begin(), res.end());
	
	int ans = 0;
	int i = res.size()-2;
	while(i >= 0) {
		if(res[i] >= res[i+1])
			res[i] = res[i+1]-1;
		i--;
	}
	
	for(auto i : res)
	{
		if(i > 0)
			ans += i;	
	}
	
	
	
	// for(auto i : mp)
	// 	cout << i.first << "  " << i.second << endl;
	cout << ans << endl;
	
}

int32_t main()
{
	w(t) {
	    solve();
    }
    return 0;
}