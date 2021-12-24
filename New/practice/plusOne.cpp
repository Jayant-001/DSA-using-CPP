#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> v) {

	bool check = true;
	for(int i = 0; i < v.size(); i++) {
		if(v[i] != 9) {
			check = false;
			break;
		}
	}

	if(check) {
		vector<int> ans;
		ans.push_back(1);
		for(int i = 0; i < v.size(); i++) {
			ans.push_back(0);
		}
		return ans;
	}

	// cout << check << endl;

	if(v[v.size()-1] != 9) {
		v[v.size()-1] = v[v.size()-1]+1;
		return v;
	}

	int i = v.size()-1;
	while(v[i] == 9){
		v[i] = 0;
		i--;
	}
	v[i] = v[i]+1;
	return v;
}

int main() {

	// vector<int> v = {7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6};
	vector<int> v = {9};

	vector<int> ans = plusOne(v);

	for(int i = 0; i < ans.size(); i++) {
		cout << ans[i];
	}
	return 0;
}