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
	int t;
	cin >> t;
	while(t--) {
		
		double n;
		cin >> n;
		
		double x = (0.143 * n);
		
		double ans = pow(x,n);
		// debug(ans);
		int a = round(ans);
		cout << a << endl;
	}
}
 
int32_t main()
{
    solve();
    return 0;
}