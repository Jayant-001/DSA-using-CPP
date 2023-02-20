#include <bits/stdc++.h>
using namespace std;

#define traverse(arr)     \
	for (auto i : arr)    \
		cout << i << " "; \
	cout << endl;

int main() {

	int n; cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) 
		cin >> arr[i];

	set<int> ans;
	for(auto i : arr) {
		
		unordered_set<int> temp;
		for(auto j : ans) temp.insert(i+j);
			temp.insert(i);
		for(auto j : temp) ans.insert(j);
	}

	cout << ans.size() << endl;
	for(auto i : ans) cout << i << " ";


	return 0;
}