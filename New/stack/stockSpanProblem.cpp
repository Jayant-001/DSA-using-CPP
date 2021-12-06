#include <iostream>
#include <vector>
#include <stack>
#include <utility>
using namespace std;

// Input format :
// 7
// 100 80 60 70 60 75 85

int main() {

	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) 
		cin >> arr[i];

	stack<pair<int, int>> s;
	vector<int> res;

	for(int i = 0; i < n; i++) {
		if(s.empty())
			res.push_back(-1);
		else if(s.top().first > arr[i])
			res.push_back(s.top().second);
		else {
			while(s.size() > 0 && s.top().first <= arr[i])
				s.pop();
			if(s.empty()) 
				res.push_back(-1);
			else 
				res.push_back(s.top().second);
		}
		s.push({arr[i], i});
	}

	for(int i = 0; i < n; i++) {
		res[i] = i-res[i];
	}

	for(int i = 0; i < n; i++) {
		cout << res[i] << " ";
	}

	return 0;
}