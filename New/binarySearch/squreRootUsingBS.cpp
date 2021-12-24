#include <iostream>
using namespace std;

int squareInt(int n) {

	int low = 0;
	int high = n;
	long long int ans = 0;
	int mid = low + (high - low) / 2;

	while(low <= high) {
		long long int mid = low + (high - low) / 2;
		if(mid * mid == n){
			ans = mid;
			break;
		}
		else if(mid * mid > n) {
			high = mid-1;
		}
		else if(mid * mid < n) {
			ans = mid;
			low = mid+1;
		}
	}

	return ans;
}

double squarePrecision(int n, int precision, int baseSoln) {

	double ans;
	double factor = 1;
	for(int i = 0; i < precision; i++) {
		factor /= 10;
		for(double j = baseSoln; j * j < n; j = j + factor) {
			ans = j;
		}
	}

	return ans;
}



int main() {

	int n;
	cin >> n;

	int baseSquare = squareInt(n);

	cout << squarePrecision(n, 3, baseSquare);
	

	return 0;
}