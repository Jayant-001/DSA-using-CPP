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
	//int n; cin >> n;
	//vector<int> arr(n);
	//for(int i = 0; i < n; i++) cin >> arr[i];
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int m;
	cin>>m;
	vector<int> b(m);
	for(int i=0;i<m;i++)
		cin>>b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	if(a[n-1]>b[m-1])
	{
		cout<<"Alice\nAlice\n";
	}
	else if(a[n-1]<b[m-1])
	{
		cout<<"Bob\nBob\n";
	}
	else
	{
		cout<<"Alice\nBob\n";
	}
	
}
 
int32_t main()
{
	w(t) {
	    solve();
    }
    return 0;
}