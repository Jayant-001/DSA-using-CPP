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
	int n;
	cin >> n;
	vector<vector<int>> arr,arr1;
	map<pair<int,int>,int> idx;
	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		vi temp = {a,b};
		arr.pb(temp);
		arr1.pb(temp);
		
	}
	sort(arr.begin(), arr.end());
	
	int ans = 0;
	// for(auto i : arr) {
	// 	for(auto j : i)
	// 		cout << j <<  " ";
	// 	cout << endl;
	// }

	int k = arr[0][1];
	idx[{arr[0][0],arr[0][1]}]=1;
	for(int i = 1; i < n; i++) {
		if(arr[i][0] > k)
			ans = 1;
		k = max(k, arr[i][1]);
		if(ans==1)
		{
			idx[{arr[i][0],arr[i][1]}]=2;
		}
		else
		{
			idx[{arr[i][0],arr[i][1]}]=1;
		}
		
	}

	if(ans == 0)
		cout << -1;
	else{
		for(int i = 0; i < n; i++)
			cout << idx[{arr1[i][0],arr1[i][1]}] << " ";
	// for(int i = 0;i < n; i++)
	// 	if(i == ans)
	// 		cout << 2 << " ";
	// 	else
	// 		cout << 1 << " ";
	}
	cout  << endl;
}
 
int32_t main()
{
	w(t) {
	    solve();
    }
    return 0;
}

// 3
// 1 2
// 2 3
// 3 3
// 3
// 1 1
// 2 3
// 3 3
// 3
// 1 2
// 3 4
// 4 4
// 3
// 1 1
// 1 1
// 2 2
// 3
// 1 2
// 2 2
// 3 3
// 3
// 1 1
// 2 2
// 3 3