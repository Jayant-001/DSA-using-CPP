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
	
	w(t) {
		int n, m;
		cin >> n >> m;
		
		if(min(n, m) == 1 && max(n, m) > 2)
			cout << -1 << endl;
		else {
			m--;
			n--;
			int ans = (n+m) + ((max(m,n) - min(m,n)) / 2) * 2;
			cout << ans << endl;
		}
		
		
	}
	
}
 
int32_t main()
{
    solve();
    return 0;
}