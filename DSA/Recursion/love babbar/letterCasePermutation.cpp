#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " " << x << endl;

void getPermut(string s, string res, vector<string> &ans, int i) {
	
	if(i >= 4) {
		ans.push_back(res);
		res.clear();
		return;
	}
	
	if(isalpha(s[i]) != 0) {
		res.push_back(tolower(s[i]));
		getPermut(s, res, ans, i+1);
		res.pop_back();
		res.push_back(toupper(s[i]));
		getPermut(s, res, ans, i+1);
	}
	else if (!isalpha(s[i])) {
		res.push_back(s[i]);
		getPermut(s, res, ans, i+1);
	}
	
	// debug(res);
}

int main() {
	
	string s;
	cin >> s;
	
	vector<string> ans;
	
	getPermut(s, "", ans, 0);
	cout << endl;
	for(auto i : ans) 
		cout << i << " ";
	
	return 0;
}