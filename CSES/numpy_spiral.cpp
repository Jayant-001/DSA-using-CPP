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
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		if(x==y)
			cout<<(x*x-x+1)<<endl;
		if(x>y)
		{
			if(x%2==0)
				cout<<(x*x-y+1)<<endl;
			else
				cout<<((x-1)*(x-1)+y)<<endl;
		}
		else
		{
			if(y%2==0)
				cout<<((y-1)*(y-1)+x)<<endl;
			else
				cout<<(y*y-x+1)<<endl;
		}
	}
}
 
int32_t main()
{
    solve();
    return 0;
}