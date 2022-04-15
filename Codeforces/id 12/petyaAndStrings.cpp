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
#define mk(arr,n,type)  type *arr=new type[n]
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;

void solve()
{
	string s1, s2;
	cin >> s1 >> s2;
	
	for(int i = 0; i < s1.length(); i++) {
		if(tolower(s1[i]) < tolower(s2[i])) {
			cout << -1;
			return;
		}
		if(tolower(s1[i]) > tolower(s2[i])) {
			cout << 1;
			return;
		}
	}
	
	cout << 0;
	return;
	
}
 
int32_t main()
{
    solve();
    return 0;
}