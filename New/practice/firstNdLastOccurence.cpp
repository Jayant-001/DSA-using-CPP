#include <iostream>
using namespace std;

int search(int arr[], int low, int high, int key) {
	if(low <= high) {
		int mid = (low+high) / 2;
		if(arr[mid] == key) {
			return mid;
		}
		else if(key < arr[mid]) {
			return search(arr, low, mid-1, key);
		}
		else 
			return search(arr, mid+1, high, key);
		}
	return -1;
}

int main()
{
	int n, key;
	cin >> n >> key;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	int idx = search(arr, 0, n-1, key);
	cout << idx << endl;	

	int l = idx;
	int r = idx;
	while(l != 0 && arr[l] == key) {
		l--;
	}

	while(r != n-1 && arr[r] == key) {
		r++;
	}

	if(arr[l] != key) {
		l++;
	}
	if(arr[r] != key) {
		r--;
	}

	cout << l << " - " << r ;

	return 0;
}
