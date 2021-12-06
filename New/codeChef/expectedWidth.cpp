#include <iostream>
using namespace std;

typedef long long int lli;

int modInverse(int a, int m)
{
    int x, y;
    int g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
         
        // m is added to handle negative x
        int res = (x % m + m) % m;
        return res;
    }
}
 
// Function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int* x, int* y)
{
     
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
     
    // To store results of recursive call
    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b / a) * x1;
    *y = x1;
 
    return gcd;
}

int main() {
	int t; 
	cin >> t;

	while(t--) {
		lli n;
		cin >> n;

		lli p, q;
		const lli mod = 998244353LL;
		if(n % 2 == 0) {

			if(n%4 == 0) {
				q = 1;

				p = n/4;
				p %= mod;

				p *= (n+1);
				p %= mod;

				p*= (n+1);
				p %= mod;

			}
			else {
				q = 2;

				p = n/2;
				p %= mod;

				p *= (n+1);
				p %= mod;

				p*= (n+1);
				p %= mod;
			}
		}
		else {
			q = 1;

			p *= (n+1)/2;
			p %= mod;
			
			p*= (n+1)/2;
			p %= mod;

			p *= n;
			p %= mod;

		}

		// find inverse mod
		lli inv = 0;
		if(q == 1) {
			inv = 1;
		}
		else if (q == 2) {
			inv = 499122177;
		}
		lli ans;
		ans = p * inv;
		ans %= mod;

		cout <<  ans << endl;
	}
	return 0;
}