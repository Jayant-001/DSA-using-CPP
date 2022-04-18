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

void stringPowerset(string s, string res, int i) {
	
	if(i >= s.length()) {
		cout << res << endl;
		return;
	}
	
	stringPowerset(s, res, i+1);
	res.push_back(s[i]);
	stringPowerset(s, res, i+1);
}

void arrayPowerset(vector<int> arr, vector<int> res, int i) {
	
	if(i >= arr.size()) {
		for(auto i : res)
			cout << i << " ";
		cout << endl;
		return;
	}
	
	// not include.......
	arrayPowerset(arr, res, i+1);
	// include
	res.push_back(arr[i]);
	arrayPowerset(arr, res, i+1);
	
}

void solve()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	vector<int> temp;
	arrayPowerset(arr, temp, 0);
	
	cout << endl;
	stringPowerset("abc", "", 0);
	
}
 
int32_t main()
{
    solve();
    return 0;
}