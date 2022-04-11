#include<bits/stdc++.h>
using namespace std;

vector<int> leftMax(vector<int> arr) {
	int n = arr.size();
	vector<int> ans(n);
	ans[0] = ans[n-1] = -1;
	
	int mx = arr[0];
	for(int i = 1; i < n-1; i++) {
		ans[i] = mx;
		mx = max(mx, arr[i]);
	}
	return ans;	
}

vector<int> rightMax(vector<int> arr) {
	int n = arr.size();
	vector<int> ans(n);
	ans[0] = ans[n-1] = -1;
	
	int mx = arr[n-1];
	for(int i = n-2; i > 0; i--) {
		ans[i] = mx;
		mx = max(mx, arr[i]);
	}
	return ans;
}

void solve()
{
	
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	// cout << arr.size();
	vector<int> left = leftMax(arr);
	vector<int> right = rightMax(arr);
	// cout << left.size();
	for(auto i : left)
		cout << i << " " ;
	cout << endl;
	for(auto i : right)
		cout << i << " ";
	
	int ans = 0;
	for(int i = 1; i < n-1; i++) {
		int t = min(left[i], right[i]);
		if(arr[i] >= t)
			continue;
		else
			ans += (t - arr[i]);
	}
	
	cout << endl << ans;
	
}
 
int32_t main()
{
    solve();
    return 0;
}