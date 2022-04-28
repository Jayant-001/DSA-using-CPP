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
		int nv = 0;
		int pv = 0;
		while(n--){
			int k;
			cin >> k;
			if(k<0)
				nv++;
			else
				pv++;
		}
		
		if(pv == nv)
			cout << "YES" << endl;
		else if(nv == 0 || pv == 0)
			cout << "NO" << endl;
		else {
			bool check;
			if(pv > nv){
				check = true;
			}
			
			
			while(nv >= 2 && pv >= 2) {
				
				nv-=2;
				pv-=2;
			}
			
			if(pv > 2 || nv > 2)
				cout << "NO" << endl;
			else
				cout << "YES" << endl;			
			
		}
		
	}
}
 
int32_t main()
{
    solve();
    return 0;
}