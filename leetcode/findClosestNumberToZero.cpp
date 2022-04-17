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
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	vector<int> res;
	for(auto i : arr)
		res.push_back(abs(i));
	
    vector<int> minIdx;
    int mn = INT_MAX;
	for(auto i : res)
        mn = min(mn, i);

    for(int i = 0; i < n; i++) {
        if(res[i] == mn)
            minIdx.push_back(i);
    }

    // for(auto i : minIdx)
    //     cout << i << " ";
    // cout << endl;

    int ans = INT_MIN;
    for(auto i : minIdx)
        ans = max(ans, arr[i]);

    cout << ans;
}

// 5
// -4 -2 1 4 8
 
int32_t main()
{
    solve();
    return 0;
}