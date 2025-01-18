#include <bits/stdc++.h>

#define debug(x) cout << #x << " " << x << endl;
#define traverse(arr)     \
	for (auto i : arr)    \
		cout << i << " "; \
	cout << endl;

typedef long long ll;
typedef long int li;
using namespace std;

// generate all permutation 
void findPermut(string &s, int id) {

	if(id >= s.size()) {
		cout << s << endl;
		return;
	}

	for(int i = id; i < s.size(); i++) {
		swap(s[id], s[i]);
		findPermut(s, id+1);
		swap(s[id], s[i]);
	}
}

void leftRotate(string &s, int i, int j) {
	char t = s[i];
	while(i < j) {
		s[i] = s[i+1];
		i++;
	}
	s[j] = t;
}
void rightRotate(string &s, int i, int j) {
	char t = s[j];
	while(j > i) {
		s[j] = s[j-1];
		j--;
	}
	s[i] = t;
}

// generate all distinct permutation in accending order
void findPermutDup(string &s, int id) {

	if(id >= s.size()) {
		cout << s << endl;
		return;
	}

	// hash table helps to preseve distinct property
	vector<int> hash(26, 0);
	for(int i = id; i < s.size(); i++) {

		if(hash[s[i]-'a'] == 0) {
			hash[s[i]-'a'] = 1;
			// right rotate and left rotate helps to
			//    generate permutation in accending order
			rightRotate(s, id, i);
			findPermut(s, id+1);
			leftRotate(s, id, i);
		}
	}
}

void insertionSort(vector<int> &arr) {

	int n = arr.size();
	for(int i = 1; i < n; i++) {

		int j= i;
		while(j >= 0 && arr[j] < arr[j-1]) {
			swap(arr[j], arr[j-1]);
			j--;
		}
	}
}

void bubbleSort(vector<int> &arr) {

	int n = arr.size();
	for(int i = n-1; i > 0; i--) {
		bool flag = false;
		for(int j = n-1; j > n-i-1; j--) {
			if(arr[j] < arr[j-1]) {
				swap(arr[j], arr[j-1]);
				flag = true;
			}
		}
		if(!flag) return;
	}
}

void merge(vector<int> &arr, int l, int mid, int r) {

	int n = arr.size();
	vector<int> aux(n);

	int id = l, i = l, j = mid+1;
	while(i <= mid && j <= r) {
		if(arr[i] <= arr[j]) aux[id++] = arr[i++];
		else aux[id++] = arr[j++];
	}

	while(i <= mid) aux[id++] = arr[i++];
	while(j <= r) aux[id++] = arr[j++];

	for(int i = l; i <= r; i++) arr[i] = aux[i];
}

void mergeSort(vector<int> &arr, int l, int r) {

	if(l < r) {
		int mid = (l + r) / 2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid+1, r);
		merge(arr, l, mid, r);
	}
}

void jayant() {

	
	
}


int32_t main() {
	
	int t = 1; 
	// cin >> t;
	while(t--) {
		
	jayant();
	}
}

