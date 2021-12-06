#include <bits/stdc++.h>
using namespace	std;

// Brute Force Approach [ O(n^2) ]
int getMaxSum(int arr[], int n) {

	int tMx = INT_MIN;
	for(int i = 0; i < n; i++){
		int mx = INT_MIN;
		int sum = 0;
		for(int j = i; j < n; j++) {

			sum = sum + arr[j];
			mx = (sum > mx) ? sum : mx;
		}
		tMx = (mx > tMx) ? mx : tMx;
	}

	return tMx;
}

// Kadane's Algorithms [ O(n) ]
int kadanesAlgo(int arr[], int n) {

	int mxSum = INT_MIN;
	int curSum = 0;
	for(int i = 0; i < n; i++) {
		curSum += arr[i];
		mxSum = (curSum > mxSum) ? curSum : mxSum;
		if(curSum < 0) 
			curSum = 0;
	}

	return mxSum;
}

int main() {

	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	cout << getMaxSum(arr, n);
	cout << endl;
	cout << kadanesAlgo(arr, n);

	return 0;
}
