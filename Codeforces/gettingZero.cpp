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

int ctSteps(lli n, int ct) {

	if(n == 0) {
		return ct;
	}

	lli ans = (n + 1) % 32768;
		return ctSteps(ans,	ct+1);

	lli ans2 = (2*n) % 32768;
		return ctSteps(ans2, ct+1);
}

void solve()
{
	lli n;
	cin >> n;
	vector<lli> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	for(int i = 0; i < n; i++)
		cout << ctSteps(arr[i], 0) << " ";
}

int32_t main()
{
    solve();
    return 0;
}