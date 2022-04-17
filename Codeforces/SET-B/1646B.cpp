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
	
	w(t) {
		ll n;
		cin >> n;
		vector<ll> arr(n);
		for(ll i = 0; i < n; i++)
			cin >> arr[i];
		
		sort(arr.begin(), arr.end());
		long long blueSum = arr[0];
		long long blueCount = 1;
		
		ll redSum = arr[n-1];
		ll redCount = 1;
		
		// ll blueSum = 0;
		// ll blueCount = 0;
		
		// ll redSum = 0;
		// ll redCount = 0;
		
		ll i = 0;
		ll j = n-1;
		
		bool check = false;
		while(i < j) {
			
			// debug(blueSum);
			// debug(blueCount);
			// debug(redSum);
			// debug(redCount);
			
			if(redSum > blueSum && redCount < blueCount) {
				check = true;
				break;
			}
			
			if(redCount >= blueCount)  {
				i++;
				blueSum += arr[i];
				blueCount++;
			}
			else if(blueSum >= redSum) {
				j--; 
				redSum += arr[j];
				redCount++;
			}
		}
		
		if(check)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
}
 
int32_t main()
{
    solve();
    return 0;
}