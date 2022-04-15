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
	string s;
	cin >> s;
	string res = "";
	
	int i = 0;
	while(i < s.length()) {
		if(s[i] == '.') {
			res.push_back('0');
			i++;
		}
		else if(s.substr(i,2) == "-.") {
			res.push_back('1');
			i+=2;
		}
		else {
			res.push_back('2');
			i+=2;
		}
	}
	cout << res;
}
 
int32_t main()
{
    solve();
    return 0;
}