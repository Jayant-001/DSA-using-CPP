#include <bits/stdc++.h>
using namespace std;

vector<string> v;

void subString(string s, int l, string res) {

	if(l == s.size()) {
		// if(res[0] < res[res.size()-1]) {
		// 	int temp = res.size();
		// 	// cout <<  temp << endl;
		// 	ct = temp > ct ? temp : ct;
		// }
		// cout << res << endl;
		cout << res << endl;
		v.push_back(res);
		return;
	}

	subString(s, l+1, res+""+s[l]);
	subString(s, l+1, res);
}

int main() {

	string s = "ABC";
	subString(s, 0, "");

	// cout << "- " << v.size();

	int ct = 0;
	for(int i = 0; i < v.size(); i++){
		string t = v[i];
		if(t.size() > 0 && t[0] < t[t.size()-1]) {
			ct = t.size() > ct ? t.size() : ct;
			cout << t.size()<< endl;
		}
		// cout << t << endl;
	}
	cout << "ct: " << ct;
	return 0;
}
