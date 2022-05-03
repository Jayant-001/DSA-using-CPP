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

void flip(vector<int> &arr, int k) {
	int i = 0;
	int j = k;
	while(i < j) {
		swap(arr[i++], arr[j--]);
	}
}

int find(vector<int> arr, int k) {
	for(int i= 0; i < arr.size(); i++)
		if(arr[i] == k) 
			return i;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n ; i++)
		cin >> arr[i];

	vector<int> ans;
	int b = 0;

	int k = n;
	int j = n-1;
	for(int i = 0; i < n-1; i++) {
		int pos = find(arr, k);
		cout << k << " " << pos << endl;
		if(pos == j)
			b++;
		else if(pos == 0) {
			flip(arr, j);
			ans.push_back(j);
		}
		else {
			flip(arr, pos);
			ans.push_back(pos);
			flip(arr, j);
			ans.push_back(j);
		}
		
		j--;
		k--;
		// for(auto i : arr)
		// 	cout << i << " ";
		// cout << endl;
	}
	
	
	
	// flip(arr, 3);
	
	for(auto i : ans)
		cout << i+1 << " ";
}
 
int32_t main()
{
    solve();
    return 0;
}