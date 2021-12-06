#include <iostream>
using namespace std;

int main() {
    
	// int *p;
	// int a = 20;
	// p = &a;
	// cout << &a << endl;
	// cout << p << endl << *p;

	int arr[5] = {10,20,30,40,50};

	cout << 3[arr] << endl;

	for (int i = 0; i < 5; i++) {
		cout << i[arr] << " ";
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		cout << *(arr+i) << " ";
	}

	cout << endl;

	for (int i = 0; i < 5; i++) {
		cout << (arr+i) << " ";
	}

	cout << endl;
	cout << &arr+1;
	cout << endl;
	cout << *arr+1 << " " << *(arr+1);

	return 0;
}