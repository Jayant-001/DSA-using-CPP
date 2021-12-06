#include <iostream>
using namespace std;
typedef long long int lli;

lli gcd(lli a, lli b) {
	if(b == 0) {
		return a;
	}
	else return gcd(b, a%b);
}

int main() {

	int t;
	cin >> t;

	while(t--) {

		int n, k
		cin >> n >> k;
		int p = 0;

		/*

			k*p % n == 0

			k >= 1
			if we choose p = n, then
			k*n % n == 0

			if k%n == 0 already
			we choose p = 1

			ex:
			k  = 4, n = 5

			4*p % 5 == 0
			p need to be five

			find gcd(n, k) 
		*/

		lli g = gcd(n, k) ;
		p = n/g;
		cout << p << endl;

	}

	return 0;
}