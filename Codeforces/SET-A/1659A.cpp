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
		int total, r, b;
		cin >> total >> r >> b;
		
		string s = "";
		
		int t = r/(b+1);
		int sum = r % (b+1);
		
		while(r) {
			int totalNeed = t +(sum >0);
			sum = max(0, sum-1);
			r -= totalNeed;
			
			while(totalNeed--)
				cout << "R";
			if(b > 0) {
				cout << "B";
				--b;
			}
		}
		cout << endl;
	}
}
 
int32_t main()
{
    solve();
    return 0;
}