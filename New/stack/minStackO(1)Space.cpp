#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<int> s;
int minEl = 0;

void push(int n) {

	if(s.empty()) {
		s.push(n);
		minEl = n;
	}

}

int pop() {


}

int minEl() {


}

int topEl() {

	if(s.empty())
		return -1;
	return s.top();
}


int main() {


	return 0;
}