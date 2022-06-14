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
	int n; cin >> n;
	int arr[8] = {0};
	for(int i = 0;i < n; i++) {
		int t;
		cin >> t;
		++arr[t];
	}
	
	if(arr[5] == 0 && arr[7] == 0 && arr[2] >= arr[4] 
		&& arr[1] == arr[4]+arr[6] && arr[2] + arr[3] == arr[4] + arr[6]) {
		
		for(int i = 0; i < arr[4]; i++)
			cout << "1 2 4" << endl;
		arr[2] -= arr[4];
		for(int i = 0; i < arr[2]; ++i)
			cout << "1 2 6" << endl;
		for(int i= 0; i < arr[3]; ++i)
			cout << "1 3 6" << endl;
	}
	else
		cout << -1;
	
	
	
}
 
int32_t main()
{
	//w(t) {
	    solve();
    //}
    return 0;
}