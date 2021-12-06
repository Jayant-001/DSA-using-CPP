#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// stack that hold all element
stack<int> s;
// supporting stack that hold min element of main stack
stack<int> ss;

// to push into min stack--------------------------
void pushEl(int n) {

	s.push(n);
	if(ss.empty() || n <= ss.top()) 
		ss.push(n);

}

// to pop from min stack-----------------------------------
int popEl() {

	if(s.empty())
		return -1;

	int popped = s.top();
	s.pop();

	if(popped == ss.top())
		ss.pop();
	
	return popped;
}

// return minimum element from min stack---------------------
int getMin() {

	if(ss.empty())
		return -1;

	return ss.top();
}



int main() {

	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) 
		cin >> arr[i];

	for(int i = 0; i < n; i++) {
		pushEl(arr[i]);
	}

	int t = s.size();
	for(int i = 0; i < t; i++) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;

	t = ss.size();
	for(int i = 0; i < t; i++) {
		cout << ss.top() << " ";
		ss.pop();
	}

	return 0;
}