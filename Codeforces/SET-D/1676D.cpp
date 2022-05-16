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

int upLeft(vector<vector<int>> arr, int i, int j, int m, int n) {
	// int m = arr.size();
	// int n = arr[0].size();
	if(i >= m || j >= n) return 0;
	int sum = 0-arr[i][j];
	while(i >= 0 && j >= 0)
		sum += arr[i--][j--];
	return sum;
}

int upRight(vector<vector<int>> arr, int i, int j, int m, int n) {
	int sum = 0-arr[i][j];
	while(i >= 0 && j < n) 
		sum += arr[i--][j++];
	return sum;
}

int downLeft(vector<vector<int>> arr, int i, int j, int m, int n) {
	int sum = 0-arr[i][j];
	while(i < m && j >= 0)
		sum += arr[i++][j--];
	return sum;
}

int downRight(vector<vector<int>> arr, int i, int j, int m, int n) {
	int sum = 0-arr[i][j];
	while(i < m && j < n)
		sum += arr[i++][j++];
	return sum;
}
void solve1()
{
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	int mx = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			int now = 0;
			int ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m)
			{
				now+=a[ci][cj];
				ci--;
				cj--;
			}
			ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m)
			{
				now+=a[ci][cj];
				ci++;
				cj--;
			}
			ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m)
			{
				now+=a[ci][cj];
				ci--;
				cj++;
			}
			ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m)
			{
				now+=a[ci][cj];
				ci++;
				cj++;
			}
			now-=a[i][j]*3;
			mx = max(mx, now);
		}
	}
	cout << mx << endl;
}


void solve()
{
	int m, n; 
	cin >> m >> n;
	
	vector<vector<int>> arr;
	for(int i = 0; i < m; i++) {
		vector<int> temp(n);
		for(int j = 0; j < n; j++)  {
			cin >> temp[j];
		}
		arr.push_back(temp);
	}
	
	int ans = 0;
	// for(int i = 0; i < m ;i++) {
	// 	for(int j = 0; j < n; j++) {
	// 		int k = upLeft(arr, i, j, m, n) + upRight(arr, i, j, m, n) + downLeft(arr, i, j, m, n)+downRight(arr, i, j, m, n)+arr[i][j];
	// 		// cout << k << " ";
	// 		ans = max(ans, k);
	// 	}
	// 	// cout << endl;
	// }
	int i = 0;
	while(i < m && i < n) {
		int k = upLeft(arr, i, i, m, n) + upRight(arr, i, i, m, n) + downLeft(arr, i, i, m, n)+downRight(arr, i, i, m, n)+arr[i][i];
			// cout << k << " ";
			ans = max(ans, k);
			i++;
	}
	cout << ans << endl;
}
 
int32_t main()
{
	w(t) {
	    solve1();
    }
    return 0;
}