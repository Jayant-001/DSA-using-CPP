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
		string s;
		cin >> s;
		
		string t = "";
		for(auto i : s) {
			if(i == '2')
				t.push_back('5');
			else if(i == '5')
				t.push_back('2');
			else if(i == '6')
				t.push_back('9');
			else if(i == '9')
				t.push_back('6');
			else 
				t.push_back(i);
		}
		
		debug(s);
		debug(t);
		cout << endl;	
	}
}
 
int32_t main()
{
    solve();
    return 0;
}