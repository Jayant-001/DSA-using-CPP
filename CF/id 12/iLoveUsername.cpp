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
	int n;
	cin >>n;
	mk(arr, n, int)
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
	
	int curMin = *arr;
	int curMax = *arr;
	int ct = 0;
	
	for(auto i = 1; i < n; i++){
		if(curMin < *(arr+i)) {
			curMin = *(arr+i);
			ct++;
		}
		else if(curMax > *(arr+i)) {
			curMax = *(arr+i);
			ct++;
		}
	}
	
	cout << ct;
}
 
int32_t main()
{
    solve();
    return 0;
}