#include <iostream>
#include <vector>
#include <map>
#include <stack>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++) 
		cin >> v[i];

	map<int, int> idx;

	for(int i = 0; i < n; i++) {

		if(idx.empty()){
			idx.insert(pair<int, int>(i, v[i]));
		}
		else {
			map<int, int>::iterator itr;
			for(itr = idx.begin(); itr != idx.end(); ++itr) {
				if(itr->second == v[i]){
					cout << "found ";
					return 0;
				}
			}
			idx.insert(pair<int, int>(i, v[i]));
		}

	}
	cout << "not found";

	return 0;

}