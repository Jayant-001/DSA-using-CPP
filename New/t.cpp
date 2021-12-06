#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <ctype.h>
#include <utility>
using namespace std;

int main() {

	int n;
	cin >> n;

	vector<string> arr(n);
	for(int i = 0; i < n; i++) 
		cin >> arr[i];

	stack<int> s;
	for(int i = 0; i < n; i++) {

		if(arr[i] == "C") 
			s.pop();
		else if(arr[i] == "D") {
			int n = s.top() * 2;
			s.push(n);
		}
		else if(arr[i] == "+") {
			int t1 = s.top();
			s.pop();
			int t2 = s.top();
			s.push(t1);
			int n = t1 + t2;
			s.push(n);
		}
		else {
			int n = stoi(arr[i]);
			s.push(n);
		}

	}

	int num = 0;
	int t = s.size();
	for(int i = 0; i < t; i++) {
		num += s.top();
		s.pop();
	}

	cout << num;

	return 0;
}