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

bool isDistinct(vector<int> arr) {
	map<int, int> mp;
	for(auto i : arr)
		mp[i]++;
	
	return mp.size() == 1;
}

vector<int> countSmaller(vector<int> arr){
	vector<int> res;
	for(int i = 1; i < arr.size(); i++) {
		if(arr[i] < arr[i-1])
			res.push_back(i);
	}
	return res;
}

bool check(vector<vector<int>> arr, int a, int b) {
	int n = arr.size();
	for(int i = 0; i < n; i++) {
		if(arr[i][a] < arr[i][b])
			return false;
	}
	return true;
}

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> arr;
	for(int i = 0; i < n; i++) {
		vector<int> temp;
		for(int j = 0; j  < m; j++) {
			int k;
			cin >> k;
			temp.push_back(k);
		}
		arr.push_back(temp);
	}
	vector<int> res;
	for(int i =0; i < n; i++) {
		if(isDistinct(arr[i]) || countSmaller(arr[i]).size() == 0) {
			// cout << "clkdjf" << endl; 
			continue;
		}
		else {
			res = countSmaller(arr[i]);
			// for(auto i : res)
			// 	cout << i << " ";
			break;
		}
	}
	// for(auto i : res)
	// 	cout << i << " ";
	// cout << endl;
	if(res.empty())
	{
		cout << 1 << " " << 1;
		// cout << "sorted" << endl;
	}
	else if(res.size() > 2)
		cout << -1 ;
	else {
		bool c;
		if(res.size() == 1) {
			c  = check(arr, res[0]-1, res[0]);
			if(c == true) {
				cout << res[0] << " " << res[0]+1;
			}
			else cout << -1;
		}
		
		else{
			c = check(arr, res[0], res[1]);
			if(c == true) {
				cout << res[0] << " " << res[1]+1;
			}
			else cout << -1;
		}
		
		// if(c == true) {
		// }
		// cout  << endl;
	}
	
	// for(auto i : arr){
	// 	for(auto j : i)
	// 		cout << j << " ";
	// 	cout << " : " << isDistinct(i);
	// 	cout << endl;
	// }
}

int32_t main()
{
	w(t) {
	    solve();
	    cout << endl;
    }
    return 0;
}