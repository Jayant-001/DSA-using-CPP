#include <iostream>
#include <utility>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

// Input format : 
// 7
// 6 2 5 4 5 1 6

int main() {

	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i <n; i++) 
		cin >> arr[i];

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
	cout << max;
	return 0;
}