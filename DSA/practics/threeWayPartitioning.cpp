// https://practice.geeksforgeeks.org/problems/three-way-partitioning/1
#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int a, b;
    cin >> a >> b;

    int low = 0;
    int high = n-1;

    int mid = 0;
    while(mid <= high) {
        
        if(arr[mid] < a) {
            swap(arr[mid++], arr[low++]);
        }
        else if(arr[mid] >= a && arr[mid] <= b)
            mid++;
        else {
            swap(arr[mid], arr[high]);
            high--;
            
        }
    }


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}