#include <iostream>
#include <vector>
#include <bits/stdc++.h>
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
#define endl "\n"
#define M 1000000007

// int search(vector<lli> arr, lli k) {
// 	if(k <= arr[arr.size()-1])
// 		return arr.size()-1;
// 	int l = 0;
// 	int r = arr.size()-1;
// 	while(l <= r) {
// 		int mid = (l+r) / 2;
// 		// cout << arr[mid] << endl;
// 		if(k == arr[mid])
// 			return mid;
// 		if(k < arr[mid] && k > arr[mid+1])
// 			return mid;
// 		// else if(arr[mid] < k && arr[mid+1] < k)
// 			// return mid+1;
// 		else if(arr[mid] > k) {
// 			l = mid+1;
// 		}
// 		else 
// 			r = mid-1;
// 	}
// 	return -1;
// }	


	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum = 0;
	    for(int i = 0; i < n; i++)
	        sum += arr[i];
	        
	    int dp[n+1][sum+1];
	    for(int i = 0; i < sum+1; i++)
	        dp[0][i] = 0;
	   for(int i = 0; i < n+1; i++)
	        dp[i][0] = 1;
	        
	   for(int i = 1; i < n+1; i++) {
	       for(int j = 1; j < sum+1; j++) {
	           if(arr[i-1] <= j)
	                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
	           else 
	                dp[i][j]  = dp[i-1][j];
	       }
	   }
	   int ans = INT_MAX;
	   for(int i= 0; i <= sum/2; i++) {
	       //cout << dp[n][i];
	       if(dp[n][i] == 1) ans = min(ans, sum-(2*i));
	   }
	   
	   return ans;
	    
	} 

int getOdd(vector<int> arr) {
    int ct = 0;
    for(auto i : arr) {
        if(i&1) ct++;
    }
    return ct;
}

int getEven(vector<int> arr) {
    int ct = 0;
    for(auto i : arr) {
        if(i % 2 == 0) 
            ct++;
    }
    return ct;
}

int factorial(int n) {
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

int ncr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int getPath(vector<vector<char>> arr, int i, int j, int n) {

	if(i == n-1 && j == n-1) return 1;
	if(i < 0 || i >= n || j < 0 || j >= n) return 0;
	// if(arr[i][j] == '*') return 0;

	cout << i << " " << j << endl;
	int ans = 0;
	ans += getPath(arr, i, j-1, n);
	ans += getPath(arr, i, j+1, n);
	// ans += getPath(arr, i-1, j, n);
	ans += getPath(arr, i+1, j, n);

	return ans;
	// for(auto p : arr) {
	// 	for(auto q : p)
	// 		cout << q << " ";
	// 	cout << endl;
	// }
	// return 0;
}

bool check(string s) {
	debug(s);
	string t = "";
	unsigned long long n = 0;
	for(auto i: s)
		if(i != '_')
			n = (n* 10) + (i-'0');
	if(n < 25) return false;
	return (n % 25 == 0);
}

int dp[101][101];
int slv(vector<int> &arr, int n, int sum) {

	if(n <= 0) return 0;
	if(sum <= 0) return 0;
	if(dp[n][sum] != -1) return dp[n][sum];
	if(arr[n-1] <= sum) {
		return dp[n][sum] = max(1+slv(arr, n-1, sum-arr[n-1]) , slv(arr, n-1, sum));
	}
	return dp[n][sum] = slv(arr, n-1, sum);	
}

int cal(int num){
	int ans = 0;
	while (num){
		ans += num % 10;
		num /= 10;
	}
	return ans;
}

void solve() {

	// int n, k; cin >> n >> k;
	// vector<int> arr(n);
	// for(int i= 0; i < n; i++)
	// 	cin >> arr[i];
	
	int n; cin >> n;
	int ans = 0;
	while (n){
		ans ++;
		if (cal(ans) == 10) n--;
	}
	printf("%d\n", ans);

}

// int32_t main()
// {
// 	w(t) {
// 	    solve();
//     }
//     return 0;
// }
#include<bits/stdc++.h>
#define endl "\n"
#define M 1000000007
 
using namespace std;
 
int power(int a, int b);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // w(t) {
	    solve();
    // }
 
}

int power(int x,int n){
    // write your code here
    if (n == 0)
    	return 1;
    if(n == 1)
        return x;
    
  	int pow = power(x, n/2);
  	int ans = pow * pow;
  	
  	if(n % 2 == 1)
  		ans *= x;
  	return ans;
}