#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	
	int t;
	cin >> t;
	while(t--) {
		
		ll n, k;
		cin >> n >> k;
		int count = 0;
		
		if(n == 1 && k == 1)
			cout << n << endl;
		else {
			if(k < 2 || k > n)
				cout << -1 << endl;
			else {
				for(int i = 0; i < k-1; i++) {
					cout << i+1 << " ";
					count = i;
				}
				for(int i = 0; i < n-count-1; i++) 
					cout << n-i << " ";
				cout << endl;
			}
		}
		
	}
	return 0;
}