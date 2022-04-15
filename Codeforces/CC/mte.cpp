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
		int n;
		cin >> n;
		vector<int> arr(n);
		int odd = 0, even = 0, ans = -1;

		for(int i = 0; i < n; i++) {
			int t;
			cin >> t;
			if(t & 1)
				odd++;
			else
				even++;
		}
		if(odd == n || even == n)
			ans = 0;
		else if(odd & 1) {
			ans = even;
		}
		else {
			if(odd <= even) {
				ans = odd/2;
			}
			else {
				ans = min(odd/2, even);
			}
		}
		
		
		
		
		cout << ans << endl;
	}
}

int32_t main()
{
    solve();
    return 0;
}