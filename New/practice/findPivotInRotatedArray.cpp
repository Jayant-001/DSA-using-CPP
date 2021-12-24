#include <iostream>
using namespace std;

int binarySerch(int arr[], int l, int r, int key) {

	if(r >= l) {
		int mid = (l+r) / 2;
		if(arr[mid] == key)
			return mid;
		else if(key > arr[mid]) 
			return binarySerch(arr, mid+1, r, key);
		else
			return binarySerch(arr, l, mid-1, key);	
	}

	return -1;
}

int searchPivot(int arr[], int n) {

	int l = 0;
	int r = n-1;
	int mid = l + (r-l)/2;
	while(l < r) {

		if(arr[mid] >= arr[0]) {
			l = mid+1;
		}
		else {
			r = mid;
		}
		mid = l + (r-l)/2;
	}
	return l;
}

int main() {

	int n, key;
	cin >> n >> key;
	int arr[n];
	for(int i = 0; i < n; i++) 
		cin >> arr[i];

	int pivotIdx = searchPivot(arr, n);
	cout << "pivot Index : " << pivotIdx << endl;

	int idx = -1;
	if(key == arr[pivotIdx])
		idx = pivotIdx;
	else if(arr[pivotIdx] <= key && key <= arr[n-1] )
		idx = binarySerch(arr, pivotIdx, n-1, key);
	else 
		idx = binarySerch(arr, 0, pivotIdx, key);

	cout << idx;

	return 0;
}