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

int fun(vector<int> arr, int i, int t) {
	
	if(t == 0 || i == 0)
		return 1;
	cout << t << endl;
	// for(int x = 0; x < arr.size(); x++){
	if(arr[i-1] <= t)
		return fun(arr, i-1, t-arr[i-1]) + fun(arr, i-1, t);
	else
		return fun(arr, i-1, t);
	// }
	
}

void solve()
{
	int n, t;
	cin >> n >> t;
	vector<int> arr(n);
	for(int i = 0 ;i < n;i++)
		cin >> arr[i];
	
	cout << fun(arr, n, t);
	
}
 
int32_t main()
{
    solve();
    return 0;
}