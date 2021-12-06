#include <bits/stdc++.h>
using namespace std;

int main() {

		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++) 
			cin >> v[i];

		int neg = 0;
		for(int i = 0; i < n; i++) {
			if(v[i] < 0) {
				neg++;
			}
		}

		vector<int> res;
		int id = 0;
		for(int i = 0; i < n; i++) {
			if(v[i] < 0) {
				res.push_back(v[i]);
			}
		}

		for(int i = 0; i < n; i++) {
			if(v[i] > 0) {
				res.push_back(v[i]);
			}
		}

		for(int i = 0;i  < res.size(); i++) 
			cout << res[i] << " ";

	return 0;
}