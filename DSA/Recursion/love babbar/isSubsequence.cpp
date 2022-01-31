// https://leetcode.com/problems/is-subsequence/
// https://leetcode.com/problems/number-of-matching-subsequences/
#include <bits/stdc++.h>
using namespace std;

bool check(string s, string key, int i) {
	
	if(i >= s.length() || key.empty()) 
		return key.empty();
	
	if(s[i] == key[0]) 
		key.erase(key.begin()+0);
	
	return check(s, key, i+1);
}

int main() {
	
	// string str, key;
	// cin >> str >> key;
	
	string str = "abcde";
	vector<string> words = {"a","bb","acd","ace"};
	str = "dsahjpjauf";
	words = {"ahjpjau","ja","ahbwzgqnuk","tnmlanowax"};
	
	int ct = 0;
	for(int i = 0; i < words.size(); i++) {
		if(check(str, words[i], 0))
			ct++;
	}
	
	cout << ct;
	
	return 0;
}