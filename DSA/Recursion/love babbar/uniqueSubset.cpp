// get unique subset set with dublicate element
#include <bits/stdc++.h>
using namespace std;

void getSubset(vector<int> arr, vector<int> res, set<vector<int>> &s, int i) {
	
	if(i >= arr.size()) {
		sort(res.begin(), res.end());
		s.insert(res);
		return;
	}
	
	getSubset(arr, res, s, i+1);
	res.push_back(arr[i]);
	getSubset(arr, res, s, i+1);
}

int main() {
	
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	set<vector<int>> s;
	vector<vector<int>> ans;
	vector<int> output;
	getSubset(arr, output, s, 0);
	
	vector<vector<int>> temp;
	cout << "set size: " << s.size() << endl;
	for(auto i : s) {
		temp.push_back(i);
	}
	
	for(int i = 0; i < temp.size(); i++) {
		for(int j = 0; j < temp[i].size(); j++) {
			cout << temp[i][j] << " ";
		}
		cout << endl;
	}
	
	// cout << endl;
	// for(int i = 0; i < ans.size(); i++) {
	// 	for(int j = 0; j < ans[i].size(); j++) {
	// 		cout << ans[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	
	// for(int i = 0; i < ans.size()-1; i++) {
	// 	if(ans[i] == ans[i+1])
	// 		ans.erase(ans.begin()+i);
	// }
	
	// for(int i = 0; i < ans.size(); i++) {
	// 	for(int j = 0; j < ans[i].size(); j++) {
	// 		cout << ans[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	
	return 0;
}