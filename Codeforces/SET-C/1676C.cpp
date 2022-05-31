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
	int n, k;
	cin >> n >> k;
	vector<string> arr(n);
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
	
	sort(arr.begin(), arr.end());
	// for(auto i : arr)
	// 	cout << i << endl;
	int ans = INT_MAX;
	for(int i = 0; i < n-1; i++) {
		for(int p = i+1; p < n; p++) {
			int temp = 0;
			for(int j = 0; j < k; j++) {
				
		        temp += abs(arr[i][j]-arr[p][j]);
		    }
		        ans = min(ans, temp);
		}
	}
	cout << ans << endl;
}
 
int32_t main()
{
	w(t) {
	    solve();
    }
    return 0;
}