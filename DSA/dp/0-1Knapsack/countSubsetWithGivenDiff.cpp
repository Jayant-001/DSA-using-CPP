#include <bits/stdc++.h>
using namespace std;

// recursion
int count(vector<int> v, int sum, int n) {

    if(sum == 0)
        return 1;
    if(n == 0)
        return 0;

    if(v[n-1] <= sum)
        return (count(v, sum-v[n-1], n-1) + count(v, sum, n-1));
    else
        return count(v, sum, n-1);
}

// top-down
int countSubset(vector<int> arr, int sum, int n) {

    int dp[n+1][sum+1];
    for(int i = 0; i < n+1; i++) 
        for(int j = 0; j < sum+1; j++) {
            if(i == 0)
                dp[i][j] = 0;
            if(j == 0)
                dp[i][j] = 1;
        }

    for(int i = 1; i < n+1; i++) {
        for(int j = 1; j < sum+1; j++) {

            if(arr[i-1] <= j)
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][sum];
}

int main() {
    
    int n, diff;
	cin >> n >> diff;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
    
    int sum  = 0;
    for(auto i : arr)
        sum += i;

    int s1 = (diff+sum) / 2;


	cout << count(arr, s1, n);
    cout << endl;
    cout << countSubset(arr, s1, n);
}
