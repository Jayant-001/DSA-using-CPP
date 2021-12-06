#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++) 
		cin >> v[i];


	unordered_map<int, int> umap;
	for(int i = 0; i < n; i++) {
		umap[v[i]]++;
	}

    for (auto x : umap)
      cout << x.first << " " << x.second << endl;

	return 0;
}
