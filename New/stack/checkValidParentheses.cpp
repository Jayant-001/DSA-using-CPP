#include <iostream>
#include <stack>
using namespace std;

bool isValid(string str) {

	stack<char> s;

	for(int i = 0; i < str.size(); i++) {

		if(str[i] == ')' && !s.empty() && s.top() == '('){
			s.pop();
		}
		else if(str[i] == '}' && !s.empty() && s.top() == '{'){
			s.pop();
		}
		else if(str[i] == ']' && !s.empty() && s.top() == '[' ){
			s.pop();
		}
		else {
			s.push(str[i]);
		}
	}
	
	return s.empty();
}

int main() {

	string s;
	// s = "()[()({})]";
	// s = "(())]";
	s = "]";

	if(isValid(s))
		cout << "valid";
	else 
		cout << "invalid";

	return 0;
}