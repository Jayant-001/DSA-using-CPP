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

bool checkParity(vector<int> arr) {
	int odd = 0;
	int even = 0;
	for(auto i : arr)
		if(i&1)
			odd++;
		else
			even++;
	return odd==0 || even == 0;
}

void solve()
{
	int n; cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	// if all numbers have same prity them we can't do swapping 
		// so return the arrar as same
	if(checkParity(arr)) {
		for(auto i : arr)
		cout << i << " ";
		return;
	}
	// if atleast one element of diff parity then we can use that to do swapping b/w same parity element
		// so then we can swap all elements.......
	sort(arr.begin(), arr.end());
	for(auto i : arr)
		cout << i << " ";
}
 
int32_t main()
{
	//w(t) {
	    solve();
    //}
    return 0;
}