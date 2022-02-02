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
	// int n;
	// cin >> n;
	vi arr;
	// arr = {6,2,7,5,1,2,0,3,10,2,5,0,5,5,0,8,7,6,8,0};
	arr = {6,0,7,0,7,5,7,8,3,4,0,7,8,1,6,8,1,1,2,4,8,1,9,5,4,3,8,5,10,8,6,6,1,0,6,10,8,2,3,4};
	int n = arr.size();
	// for(int i = 0; i < n; i++) 
	// 	cin >> arr[i];
	
	sort(arr.begin(), arr.end());
	int p = n/20;
	int end = (n-p-1);
	
	double mean = 0;
	for(int i = p; i <= end; i++) {
		mean += arr[i];
	}
	
	cout << mean/(n-(2*p));	
}
 
int32_t main()
{
    solve();
    return 0;
}