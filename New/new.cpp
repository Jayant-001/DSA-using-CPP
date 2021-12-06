#include <bits/stdc++.h>
using namespace std;
int main() {

	// int t;
	// cin >> t;

	// while(t--) {

		int n, m;
		cin >> n >> m;

		int mx = 0;
		while(n--) {
			string s;
			cin >> s;
			int ct = 0;
			for(int i = 0; i < s.size(); i++) {
				if(s[i] == '#')
					ct++;
			}
			mx = max(mx, ct);
		}

		cout << mx << endl;
	// }

	return 0;
}
