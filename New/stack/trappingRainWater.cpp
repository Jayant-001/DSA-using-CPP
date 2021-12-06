#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Input format :
// 6
// 3 0 0 2 0 4

int main() {

	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	vector<int> maxL(n);
	vector<int> maxR(n);
	vector<int> res;

	// finding maximum number in left of every element ---------------
	for(int i = 0; i < n; i++) {
		if(i == 0)
			maxL[i] = arr[i];
		else {
			int mx = max(maxL[i-1], arr[i]);
			maxL[i] = mx;
		}
	}

	// finding maximum number in right of every element ---------------
	for(int i = n-1; i >= 0; i--) {
		if(i == n-1)
			maxR[i] = arr[i];
		else {
			int mx = max(maxR[i+1], arr[i]);
			maxR[i] = mx;
		}
	}


	for(int i = 0; i < n; i++) {
		int mn = min(maxL[i], maxR[i]);
		res.push_back(mn);
	}

	int maxStoredWater = 0;
	for(int i = 0; i < n; i++) {
		maxStoredWater += res[i] - arr[i];
	}

	cout << maxStoredWater;

	return 0;
}