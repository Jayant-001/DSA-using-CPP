#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// ----------------------------------------------TLE--------------------------------------------------------
void solve(vector<int> arr, int idx, int target, vector<int> res, set<vector<int>>& ans) {

	if(target == 0) {
		// sort(res.begin(), res.end());
		ans.insert(res);
		return;
	}
	if(target < 0 || idx >= arr.size())
		return;

	for(int i = idx; i < arr.size(); i++) {
		if(i > idx && arr[i] == arr[i-1]) continue;
		res.push_back(arr[i]);
		solve(arr, i+1, target-arr[i], res, ans);
		res.pop_back();
	}

	// res.push_back(arr[idx]);
	// solve(arr, idx+1, target-arr[idx], res, ans);
	
	// res.pop_back();
	// solve(arr, idx+1, target, res, ans);
}

int main() {
	
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
	int target;
	cin >> target;
	
	sort(arr.begin(), arr.end());
	set<vector<int>> ans;
	vector<int> res;
	
	// solve(arr, 0, target, res, ans);
	solve(arr, 0, target, res, ans);
	
	vector<vector<int>> f;
	
	
	for(auto i : ans) 
		f.push_back(i);
	
	// print ans array
	for(auto i : f) {
		for(auto j : i)
			cout << j << " ";
		cout << endl;
	}
	
	
	return 0;
}