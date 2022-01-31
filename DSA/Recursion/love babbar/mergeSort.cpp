#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int start, int end) {

    int mid = (start+end) / 2;
    
    int len1 = mid-start+1;
    int len2 = end-mid;

    int *temp1 = new int[len1];
    int *temp2 = new int[len2];

    


}

void mergeSort(int *arr, int start, int end) {

    if(start > end) 
        return;
        
    int mid = start+end / 2;
    // Left part
    mergeSort(arr, start, mid);

    // Right part
    mergeSort(arr, mid+1, end);

    // merge divided part
    merge(arr, start, end);
}

int main() {
  
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n-1);

    for(auto i : arr) 
        cout << i << " ";

    return 0;
}