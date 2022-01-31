#include <bits/stdc++.h>
using namespace	std;

void getSubSeq(string s, string res, vector<string> &ans, int i) {
	
	if(i >= s.size()) {
		ans.push_back(res);
		return;
	}
	
	getSubSeq(s, res, ans, i+1);
	res.push_back(s[i]);
	getSubSeq(s, res, ans, i+1);
}

int main() {

	string s, key;
	cin >> s >> key;

	vector<string> ans;

	getSubSeq(s, "", ans, 0);

	int ct = 0;
	for(auto i : ans) 
		if(key == i) ct++;

	cout << ct;

	return 0;
}