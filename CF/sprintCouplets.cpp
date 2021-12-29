#include <bits/stdc++.h>
using namespace std;

string check(vector<string> v1, vector<string> v2, int n) {

	string t1 = v1[n-1];
	string t2 = v2[n-1];
	// cout << "-" << t1 << "-" << t2 << endl;
	if( !(t1[t1.length()-1] == '3' || t1[t1.length()-1] == '4') ) {
		return "NO";
	}

	if( !(t2[t2.length()-1] == '1' || t2[t2.length()-1] == '2') ) {
		return "NO";
	}

	for(int i = 0; i < n; i++) {
		string t1 = v1[i];
		string t2 = v2[i];

		if( (t1[t1.length()-1] == '1' || t1[t1.length()-1] == '2') && 
			(t2[t2.length()-1] == '1' || t2[t2.length()-1] == '2') 
		) {
			return "NO";
		}
		else if ( (t1[t1.length()-1] == '3' || t1[t1.length()-1] == '4') && 
			(t2[t2.length()-1] == '3' || t2[t2.length()-1] == '4')
			) {
			return "NO";
		}

	}
	return "YES";
}

int main() {

	int t;
	cin >> t;

	while(t--) {

		int n;
		cin >> n;

		vector<string> v1(n);
		vector<string> v2(n);

		for(int i = 0; i < n; i++) 
			cin >> v1[i];

		for(int i = 0; i < n; i++) 
			cin >> v2[i];

		cout << check(v1, v2, n) << endl;		
		}



	return 0;
}