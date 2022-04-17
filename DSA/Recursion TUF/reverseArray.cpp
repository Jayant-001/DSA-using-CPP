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

// using 2 pointer-------------
void reverseArray(int *arr, int i, int j) {
	
	if( i >= j )
		return; 
	else {
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
		reverseArray(arr, i+1, j-1);
	}
}

// using single pointer-----------------------
void reverseAry(int *arr, int i, int n) {
	
	if(i >= n/2)
		return;
	else {
		int t = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = t;
		reverseAry(arr, i+1, n);
	}
}

void solve()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	// reverseArray(arr, 0, n-1);
	reverseAry(arr, 0, n);
	
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	
}
 
int32_t main()
{
    solve();
    return 0;
}