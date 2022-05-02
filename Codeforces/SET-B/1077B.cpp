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
	int n;
	cin >> n;
	vi arr(n);
	for(int i= 0; i < n; i++)
		cin >> arr[i];
	
	int ans = 0;
	
	for(int i = 1; i < n-1; i++) {
		bool c1 = false;
		bool c2 = false;
		if(arr[i] == 0 && arr[i-1] == 1 && arr[i+1] == 1)
			c1 = true;
		int t = i+2;
		if(arr[t] == 0 && arr[t-1] == 1 && arr[t+1] == 1)
			c2 = true;
		
		if(c1 && c2) {
			arr[i+1] = 0;
			ans++;
		}
		
		else if(c1) {
			arr[i-1] = 0;
			ans++;
		}
	}
	
	cout << ans << endl;
	// for(auto i : arr)
	// 	cout << i << " ";
}
 
int32_t main()
{
    solve();
    return 0;
}