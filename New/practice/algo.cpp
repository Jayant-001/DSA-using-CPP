#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  cin >> n;
  long long int arr[n];
  for(int i = 0; i < n; i++)
    cin >> arr[i];

  long long int ct = 0;
  for(int i = 1; i < n; i++){

    if(arr[i] < arr[i-1]) {
      long long int t = arr[i-1] - arr[i];
      arr[i] = arr[i] + t;
      ct += t;
    }
  }
  
  cout << ct;

	return 0;
}