#include <iostream>
#include <vector>
using namespace std;


int main() {

	int n; 
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}

	vector<int> id(1000, 0);
	for(int i = 0; i < n; i++) 
		id[v[i]]++;


	vector<int> ans;
	int mx = 0;
	for(int i = 0; i < id.size(); i++) {
		if(id[i] != 0) {
			// ans.push_back(id[i]);
			cout << i << "-" << id[i] << endl;
		}

		if(mx == 0 && id[i] > mx) {
			mx = id[i];
		}

	}

	// for(int i = 0; i < id.size(); i++) 
	// 	cout << id[i] << "-" << ans[i] << ", " << endl;

}