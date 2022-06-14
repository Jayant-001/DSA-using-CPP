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

	int ans = 0;
	int temp = 0;
	// first 1
	if(arr[0] == 1) {
		for(int i = 1; i < n; i++) {
			if(arr[i] == arr[i-1]+1) 
				temp++;
			else
				break;
		}
	}
	ans = max(ans, temp);
	temp = 0;
	// last 1000
	// debug(temp);
	if(arr[n-1] == 1000) {
		for(int i = n-2; i >= 0; i--) {
			if(arr[i] == arr[i+1]-1)
				temp++;
			else
				break;
		}
	}
	ans = max(ans, temp);
	// debug(temp);
	// middle
	// else {
		stack<int> s;
		for(int i = 0; i < n; i++) {
			// cout << arr[i] << " ";
			if(s.empty() || arr[i] == s.top()+1) {
				s.push(arr[i]);
			}
			else  {
				while(!s.empty())
					s.pop();
				s.push(arr[i]);
			}
				int t = s.size();
				ans = max(ans, t-2);
		}
	// }
	
		ans = max(ans, temp);	
	cout << ans;
}
 
int32_t main()
{
	//w(t) {
	    solve();
    //}
    return 0;
}