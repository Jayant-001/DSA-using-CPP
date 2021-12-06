#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

// Input format - 4 5 2 10 8
int main() {

	int n; 
	cin >> n;
	vector<int> arr(n);
	vector<int> res;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	stack<int> s;

	for(int i = n-1; i >= 0; i--) {
		if(s.empty()) {
			res.push_back(-1);
		}
		else if(s.top() < arr[i]) {
			res.push_back(s.top());
		}
		else {
			while(s.size() > 0 && s.top() >= arr[i]) {
				s.pop();
			}
			if(s.empty()){
				res.push_back(-1);
			}
			else {
				res.push_back(s.top());
			}
		}
		s.push(arr[i]);
	}
	
	reverse(res.begin(), res.end());
	for(int i = 0; i < n; i++) {
		cout << res[i] << " ";
	}

	return 0;
}