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
	vi arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	vi ans;
	stack<pair<int, int>> s;
	
	for(int i = 0; i < n; i++) {
		if(s.empty())
			ans.push_back(-1);
		else if(s.top().first > arr[i])
			ans.push_back(s.top().second);
		else {
			while(!s.empty() && s.top().first <= arr[i]) 
				s.pop();
			if(s.empty())
				ans.push_back(-1);
			else {
				ans.push_back(s.top().second);
			}
		}
		s.push({arr[i], i});
	}
	
	for(int i = 0; i < n; i++)
		ans[i] = i - ans[i];
	
	for(auto i : ans)
		cout << i << " ";
}
 
int32_t main()
{
    solve();
    return 0;
}