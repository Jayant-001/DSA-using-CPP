#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int id) {
	if(id >= arr.size()) {
		for(auto i : arr) cout << i << " ";
			cout << endl;
		return 1;
	}

	if(id > 0 && arr[id] != 0 && arr[id-1] != 0 && abs(arr[id]-arr[id-1]) > 1) return 0;
	if(id < arr.size()-1 && arr[id] != 0 && arr[id+1] != 0 && abs(arr[id] - arr[id+1]) > 1) return 0; 

	if(arr[id] != 0) return solve(arr, id+1);

	int curValue = arr[id], ans = 0;
	for(int i = arr[id-1]-1; i <= arr[id-1]+1; i++) {
		arr[id] = i;
		ans += solve(arr, id+1);
	}

	return ans;
}

int main() {

	int n, m; cin >> n >> m;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	cout << solve(arr, 0);


	return 0;
}