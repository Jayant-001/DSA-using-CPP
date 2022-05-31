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
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	map<int, int> mp;
	for(auto i : arr)
		mp[i]++;
	for(auto i : mp)
		if(i.second > 2) {
			cout << "NO";
			return;
		}
	sort(arr.begin(), arr.end());

	vector<int> dec;
	vector<int> inc;
	int i = 0;
	while(i < arr.size())
	{
		dec.push_back(arr[i]);
		if(arr[i] == arr[i+1]) {
			inc.push_back(arr[i+1]);
			i+=2;
		}
		else
			i++;
	}
	cout << "YES" << endl;
	cout << inc.size() << endl;
	for(auto i : inc)
		cout << i << " ";
	cout << endl;
	reverse(dec.begin(), dec.end());
	cout << dec.size() << endl;
	if(dec.size() == 0)
		cout << "\n";
	for(auto i : dec)
		cout << i << " " ;
}
 
int32_t main()
{
	//w(t) {
	    solve();
    //}
    return 0;
}