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
	vi a(n);
	vi b(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n;i++)
		cin >> b[i];
	
	int s1 = 0;
	int s2 = 0;
	for(int i = 0; i < n;i++) {
		if(a[i] == 1 && b[i] == 0)
			s1++;
		if(a[i] == 0 && b[i] == 1)
			s2++;
	}
	
	if(s1 == s2 && s1 == 0) {
		cout << -1;
		return;
	}
	if(s1 == 0) {
		cout << -1;
		return;
	}
	
	int ans = 1;
	int val = s1;
	for(int i = 1; i <= 100006; i++) {
		if(s1 <= s2) {
			s1 = val*i;
			ans = i;
		}
		else
			break;
	}
	cout << ans;
	
}
 
int32_t main()
{
    solve();
    return 0;
}