#include <bits/stdc++.h>
using namespace std;

void getSubset(vector<int> arr, vector<vector<int>> &ans, vector<int> res, int i) {
	
	if(i >= arr.size()) {
		ans.push_back(res);
		return;
	}
	
	getSubset(arr, ans, res, i+1);
	res.push_back(arr[i]);
	getSubset(arr, ans, res, i+1);
}

int main() {
	
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	vector<vector<int>> ans;
	vector<int> output;
	getSubset(arr, ans, output, 0);
	
	for(int i = 0; i < ans.size(); i++) {
		for(int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}