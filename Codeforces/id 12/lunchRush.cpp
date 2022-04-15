#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define vi              vector<int>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
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
	int joy = INT_MIN;
	int ans = 0;
	while(n--) {
		
		int fi, ti;
		cin >> fi >> ti;
		
		if(ti > k) {
			ans = (fi-(ti-k));
		}
		else {
			ans = fi;
		}
		joy = max(ans, joy);
	}
	
	cout << joy;
	
}
 
int32_t main()
{
    solve();
    return 0;
}