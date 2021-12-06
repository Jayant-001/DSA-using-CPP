#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	int arr1[n];
	int arr2[m];
	for(int i = 0; i < n; i++)
		cin >> arr1[i];
	for(int i = 0; i < m; i++) 
		cin >> arr2[i];

	int mx = INT_MIN;
	for(int i = 0; i < n; i++) {
		mx = (arr1[i] > mx) ? arr1[i] : mx;
	}

	for(int i = 0; i < m; i++) {
		mx = (arr2[i] > mx) ? arr2[i] : mx;
	}

	vector<int> v(mx+1, 0);
	for(int i = 0; i < n; i++) {
		v[arr1[i]] = 1;
	}

	for(int i = 0; i < m; i++) {
		v[arr2[i]] = 1;
	}

	int ct = 0;
	for(int i = 1; i < v.size(); i++) {
		if(v[i] == 1) 
			ct++;
	}

	cout << ct;

	return 0;
}