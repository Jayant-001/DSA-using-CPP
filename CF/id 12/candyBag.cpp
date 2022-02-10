#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define vi              vector<int>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1e9+7
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;

// void getSum(vector<int> arr, int n, int idx, int sum, vector<int> res, vector<vector<int>> &ans) {
	
// 	if(idx >= arr.size() || sum < 0)
// 		return;
// 	if(sum == 0 && res.size() == n) {
// 		ans.push_back(res);
// 		return;
// 	}


// 	// include
// 	res.push_back(arr[idx]);
// 	int t = arr[idx];
// 	arr[idx] = 0;
// 	getSum(arr, n, idx+1, sum-t, res, ans);
// 	res.pop_back();
// 	// arr[idx] = t;
	
// 	// exclude
// 	getSum(arr, n, idx+1, sum, res, ans);
	
// }

// void getPair(int arr[], int n, int k, vector<pair<int, int>> &ans) {

//     for(int i = 0; i < n-1; i++) {

//         for(int j = i+1; j < n; j++) {
        	
//         	int t = arr[i] + arr[j];

//             if(t == k)
//             	ans.push_back(make_pair(arr[i], arr[j]));
//         }
//     }

// }

void solve()
{
	int n;
	cin >> n;
	
	int total = pow(n, 2);
	int listSize = total / n;
	vector<int> v(total);
	for(int i = 0; i < total; i++) 
		v[i] = i+1;
	
	int s = v.size()-1;
	v.erase(v.begin()+1, v.begin()+2);
	
	for(auto i : v)
		cout << i << " ";
	
	int temp = listSize/2;
	// debug(listSize);
	while(listSize--) {
		int s = v.size()-1;
		// cout << v[0] << " " << v[1] << " " << v[s] << " " << " " << v[s-1] << endl;
		for(int i = 0; i < temp; i++) {
			cout << v[0] << " " << v[v.size()-1] << " ";
			v.erase(v.begin()+0);
			v.erase(v.begin()+s);
		}
	}
}

 
int32_t main()
{
    solve();
    return 0;
}