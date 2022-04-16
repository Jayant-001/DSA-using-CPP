// https://leetcode.com/problems/container-with-most-water/
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
	vector<int> arr(n);
	for(int i = 0; i < n;i++)
		cin >> arr[i];

	int i = 0; 
	int j = n-1;
	int ans = 0;
	while(i < j) {
		int mn = min(arr[i], arr[j]);
		int t = (j-i) * mn;
		ans = max(ans, t);
		if(arr[i] < arr[j])
			i++;
		else
			j--;
	}
	cout << endl;
	cout << ans;
}
 
int32_t main()
{
    solve();
    return 0;
}