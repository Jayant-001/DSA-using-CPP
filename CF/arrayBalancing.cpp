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
		
	
		lli n;
		cin >> n;
		vector<lli> a(n);
		vector<lli> b(n);
		
		for(lli i = 0; i < n; i++)
			cin >> a[i];
		
		for(lli i = 0; i < n; i++)
			cin >> b[i];
		
		
		for(lli i = 0; i < n; i++)
			if(a[i] > b[i]){
				swap(a[i], b[i]);
			}
			
		lli ans = 0;
		for(lli i = 0; i < n-1; i++)
			ans += abs(a[i] - a[i+1]);
		
		for(lli i = 0; i < n-1; i++)
			ans += abs(b[i] - b[i+1]);
		
		cout << ans << endl;
		
	}
}
 
int32_t main()
{
    solve();
    return 0;
}