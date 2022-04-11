#include <bits/stdc++.h>
using namespace std;

// Nearest Smaller to Right
vector<int> NSR(vector<int> arr) {
	int n = arr.size();
	stack<pair<int, int>> s;
	vector<int> ans(n);
	for(int i = n-1; i >= 0; i--) {
		if(s.empty()) 
			ans[i] = n;
		else if(s.top().first > arr[i]) {
			while(!s.empty() && s.top().first >= arr[i])
				s.pop();
			if(s.empty())
				ans[i] = (n);
			else
				ans[i] = (s.top().second);
		}
		else
			ans[i] = (s.top().second);
		
		s.push({arr[i], i});
	}
	return ans;
}

// Nearest Smaller to Left
vector<int> NSL(vector<int> arr) {
	
	int n = arr.size();
	vector<int> ans;
	stack<pair<int, int>> s;
	for(int i = 0; i < n; i++) {
		if(s.empty())
			ans.push_back(-1);
		else {
			while(!s.empty() && s.top().first >= arr[i])
				s.pop();
			if(s.empty())
				ans.push_back(-1);
			else
				ans.push_back(s.top().second);
		}
		s.push({arr[i], i});
	}
	return ans;
}

int main() {
	
	int n; 
	cin >> n;
	vector<int> arr(n);
	for(int i = 0 ;i < n; i++)
		cin >> arr[i];
	
	vector<int> smallerRight = NSR(arr);
	vector<int> smallerLeft = NSL(arr);
	
	for(auto i : smallerLeft)
		cout << i << " " ;
	cout << endl;
	
	for(auto i : smallerRight)
		cout << i << " " ;
	cout << endl;
	int mx = INT_MIN;
	for(int i = 0; i < n; i++) 
		mx = max(mx, (smallerRight[i] - smallerLeft[i]-1)*arr[i]);
	
	cout << mx;
	
	return 0;
}