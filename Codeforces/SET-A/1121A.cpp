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
	int n, m, k; 
	cin >> n >> m >> k;
	vector<int> power(n);
	for(int i = 0; i < n; i++)
		cin >> power[i];
	vector<int> school(n);
	for(int i = 0; i < n; i++)
		cin >> school[i];
	
	vector<int> selected(k);
	for(int i = 0; i < k; i++)
		cin >> selected[i];
	
	
	vector<int> arr(m+1, 0);
	for(int i = 0; i < n; i++) {
		arr[school[i]] = max(arr[school[i]], power[i]);
	}
	
	int ans = 0;
	for(int i = 0; i < k; i++) {
		int sc = school[selected[i]-1];
		int st = power[selected[i]-1];
		// debug(sc);
		// debug(st);
		if(arr[sc] > power[selected[i]-1])
			ans++;
	}
	
	cout << ans;
}
 
int32_t main()
{
	// w(t) {
	    solve();
    //}
    return 0;
}

// 4 2 4
// 2 3 4 5 6 7 8 9
// 1 2 1 2 1 2 1 2
// 1 2 3 4