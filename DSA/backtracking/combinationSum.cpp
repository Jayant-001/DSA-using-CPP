#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int index, int target, vector<int> &res, vector<vector<int>> &ans) {

	if(target < 0 || index >= arr.size())
		return;
	if(target == 0) {
		ans.push_back(res);
		return;
	}

	for(int i = target; i < arr.size(); i++) {
		res.push_back(arr[i]);
		solve(arr, i, target-arr[i], res, ans);
		res.pop_back();
	}

}

int main() {

	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int target;
	cin >> target;

	vector<vector<int>> ans;
	vector<int> res;

	solve(arr, 0, target, res, ans);
	
	cout << "size " << ans.size();
	for(auto i : ans)
		for(auto j : i)
			cout << j << " ";
		cout << endl;
	
	return 0;
}