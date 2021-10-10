#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b) {
    	*a = *a ^ *b;
    	*b = *a ^ *b;
    	*a = *a ^ *b;
    }
    
vector<int> sortArr(vector<int> arr, int n){

	for(int i = 0; i < n-1; i++) {
		int min = i;
		for(int j = i+1; j < n; j++) {
			
			if(arr[j] < arr[min]) {
				min = j;
			}
		}
		
		if(min != i) {
			swap(&arr[i], &arr[min]);
		}
	}
	
	return arr;
}    

int main() {

	vector<int> v;
	v = {14, 33, 27, 10};

	vector<int> ans = sortArr(v, v.size());

	for(int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " "; 
	}
	
	return 0;
}
