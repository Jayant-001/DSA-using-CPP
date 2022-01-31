#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// TLE--------------------------------------------------------------------------------------------------
void solve(vector<int> arr, int idx, int target, vector<int> res, set<vector<int>>& ans) {
	
	if(target == 0) {
		sort(res.begin(), res.end());
		ans.insert(res);
		// res.clear();
		return;
	}
	if(target < 0 || idx >= arr.size())
		return;
	
	res.push_back(arr[idx]);
	solve(arr, idx+1, target-arr[idx], res, ans);
	
	res.pop_back();
	solve(arr, idx+1, target, res, ans);
}

// void solve2(vector<int> arr, int idx, int sum, int target, vector<int> res, set<vector<int>> &ans) {
	
// 	if(sum == target) {
// 		ans.insert(res);
// 		// res.clear();
// 		return;
// 	}
// 	if(target < 0 || idx >= arr.size())
// 		return;
	
// 	for(int i = idx; i < arr.size(); i++) {
// 		res.push_back(arr[i]);
// 		solve2(arr, i, target-arr[i], res, ans);
// 	}
	
// }

int main() {
	
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
	int target;
	cin >> target;
	
	set<vector<int>> ans;
	vector<int> res;
	
	solve(arr, 0, target, res, ans);
	// solve2(arr, 0, target, res, ans);
	
	vector<vector<int>> f;
	
	for(auto i : ans) 
		f.push_back(i);
	
	for(auto i : f) {
		for(auto j : i)
			cout << j << " ";
		cout << endl;
	}
	
	
	return 0;
}