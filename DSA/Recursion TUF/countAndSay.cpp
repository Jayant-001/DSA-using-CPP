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

string count(int n, string s, string res) {
	
	if(n == 1)
		return s;
	
	int ct = 1;
	char prev = s[0];
	for(int i = 1; i < s.length(); i++) {
		if(s[i] == prev)
			ct++;
		else {
			res += to_string(ct);
			res.push_back(prev);
			prev = s[i];
			ct = 1;
		}	
	}
	
	res+= to_string(ct);
	res.push_back(s[s.length()-1]);
	
	return count(n-1, res, "");
}

void solve()
{
	int n;
	cin >> n;
	
	cout << count(n, "1", "");
}
 
int32_t main()
{
    solve();
    return 0;
}