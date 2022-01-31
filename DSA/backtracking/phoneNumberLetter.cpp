// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include <bits/stdc++.h>
using namespace std;

void getCombinations(string num, string res, vector<string> &ans, int idx, vector<string> mapping) {
	
	if(num.length() == 0)
		return ;
	
	if(idx >= num.length()) {
		ans.push_back(res);
		return;
	}
	
	int n = num[idx] - '0';
	string letters = mapping[n];
	for(int i = 0; i < letters.length(); i++) {
		res.push_back(letters[i]);
		getCombinations(num, res, ans, idx+1, mapping);
		res.pop_back();
	}
}

int main() {
	
	string s;
	cin >> s;
	
	vector<string> ans;
	vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	getCombinations(s, "", ans, 0, mapping);
	
	for(auto i : ans)
		cout << i << " ";
	
	return 0;
}