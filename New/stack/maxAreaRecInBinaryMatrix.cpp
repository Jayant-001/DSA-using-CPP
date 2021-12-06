#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <utility>
using namespace std;

// Input format :
// 4 4
// 0 1 1 0
// 1 1 1 1
// 1 1 1 1 
// 1 1 0 0 

int MAH(vector<int> arr, int n) {

	stack<pair<int, int>> s;
	vector<int> left;
	vector<int> right;

	// for left indexes------------
	for(int i = 0 ; i <n; i++) {
		if(s.empty()) 
			left.push_back(-1);
		else if(s.top().first < arr[i])
			left.push_back(s.top().second);
		else {
			while(s.size() > 0 && s.top().first >= arr[i])
				s.pop();
			if(s.empty())
				left.push_back(-1);
			else 
				left.push_back(s.top().second);
		}
		s.push({arr[i], i});
	}
	
	// erase stack
	while(s.size() > 0)
		s.pop();

	// for right indexes---------------
	for(int i = n-1; i >= 0; i--){
		if(s.empty())
			right.push_back(n);
		else if(s.top().first < arr[i])
			right.push_back(s.top().second);
		else {
			while(s.size() > 0 && s.top().first >= arr[i])
				s.pop();
			if(s.empty())
				right.push_back(n);
			else 
				right.push_back(s.top().second);
		}
		s.push({arr[i], i});
	}

	reverse(right.begin(), right.end());

	vector<int> res;
	for(int i = 0; i < n; i++) {
		int t = right[i]-left[i]-1;
		t *= arr[i];
		res.push_back(t);
	}

	int max = INT_MIN;
	for(int i = 0; i < n; i++) {
		if(res[i] > max)
			max = res[i];		
	}

	return max;
}

int main() {

	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	vector<int> v;
	vector<int> res;
	
	for(int j = 0; j < m; j++) {
	    v.push_back(arr[0][j]);
	}
	int mx = INT_MIN;
	mx = max(mx, MAH(v, v.size()));
	
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < m; j++) {

			if(arr[i][j] == 0) {
				v[j] = 0;
			}
			else {
				v[j] = v[j] + arr[i][j];
			}
		}
		mx = max(mx, MAH(v, v.size()));
	}	

	cout << mx;

	return 0;
}