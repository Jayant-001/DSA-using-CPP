// https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1
#include<bits/stdc++.h>
using namespace std;

// recursive
int countSubsetSum(vector<int> arr, int n, int sum, int ct) {
	
	if(sum == 0) {
		return 1;;
	}
	if(n == 0)
		return 0;
	
	if(arr[n-1] <= sum)
		return (countSubsetSum(arr, n-1, sum-arr[n-1], ct) + countSubsetSum(arr, n-1, sum, ct));
	else
		return countSubsetSum(arr, n-1, sum, ct);
}


// top-down
int countSubsetSum(vector<int> arr, int sum) {
	int m = 1e9+7;
	int n = arr.size();
	int dp[n+1][sum+1];
	for(int i = 0; i < n+1; i++)
		for(int j = 0; j < sum+1; j++) {
			if(i == 0)
				dp[i][j] = 0;
			if(j == 0)
				dp[i][j] = 1;
		}
		
	for(int i = 1; i < n+1; i++) {
		for(int j = 0; j < sum+1; j++) {
			if(arr[i-1] <= j)
				dp[i][j] = (dp[i-1][j-arr[i-1]]%m + dp[i-1][j] % m)%m;
			else
				dp[i][j] = dp[i-1][j] % m;
		}
	}
	return dp[n][sum] % m;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0 ;i <n; i++)
		cin >> arr[i];
	int sum;
	cin >> sum;
	
	
	cout << countSubsetSum(arr, n, sum, 0);
	cout << endl;
	cout << "top-down: " << countSubsetSum(arr, sum);
}
 
int32_t main()
{
    solve();
    return 0;
}