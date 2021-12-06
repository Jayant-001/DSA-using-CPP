// #include <bits/stdc++.h>
// using namespace std;

// // int main() {

// // 	int n;
// // 	cin >> n;
// // 	int arr[n];
// // 	for(int i = 0; i < n; i++) {
// // 		cin >> arr[i];
// // 	}

// // 	sort(arr, arr+n, greater<int>());

// // 	int maxEng = 0;

// // 	int i = 0;
// // 	int j = n-1;
// // 	while(arr[i] != 0) {
// // 		maxEng++;
// // 		arr[i] = arr[i]-1;
// // 		i++;
// // 		if(i == n) {
// // 			i = 0;
// // 		}
// // 	}

// // 	cout << maxEng;
// // 	return 0;
// // }

// int main() {

// 		int n;
// 		cin >> n;
// 		int arr[n];
// 		for(int i = 0; i < n; i++) {
// 			cin >> arr[i];
// 		}

// 		int mn = INT_MAX;
// 		for(int i = 0; i < n; i++) {
// 			mn = (arr[i] < mn) ? arr[i] : mn;
// 		}

// 		int ct = 0;

// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main()

{

  int t;
  cin >> t;
  while(t--) {
      
  	int n;
  	cin >> n;
  	int arr[n];
  	for(int i = 0; i < n; i++) {
  		cin >> arr[i];
  	}
  
  	// sort(arr, arr+n, greater<int>());
  
  	// int maxEng = 0;
  
  	// int i = 0;
  	// while(arr[i] != 0) {
  	// 	maxEng++;
  	// 	arr[i] = arr[i]-1;
  	// 	i++;
  	// 	if(i == n) {
  	// 		i = 0;
  	// 	}
  	// }
  
		int mn = INT_MAX;
		for(int i = 0; i < n; i++) {
			mn = (arr[i] < mn) ? arr[i] : mn;
		}

    int ct = 0;
    for(int i = 0; i < n; i++) {
      if(arr[i] >= mn && arr[i] > 0) {
        ct++;
      }
    }
    ct--;

  	// cout << (ct*mn) + ct << endl;
  	cout << "mn:" << mn << endl;
  	cout << "ct :" << ct << endl;
  }

}

// 3
// 3
// 2 1 1 (2*1) + 2 = 4
// 3
// 0 5 0 (1*0) + 1 = 3
// 4
// 3 0 2 1 (3*0) + 3 = 3

// 3 1 2 3 ans=4











#include <bits/stdc++.h>
using namespace std;

int main()

{

  int t;
  cin >> t;
  while(t--) {
      
  	int n;
  	cin >> n;
  	int arr[n];
  	for(int i = 0; i < n; i++) {
  		cin >> arr[i];
  	}

    int mn = INT_MAX;
    for(int i = 0; i < n; i++) {
      mn = (arr[i] < mn) ? arr[i] : mn;
    }

    int ct = 0;
    for(int i = 0; i < n; i++) {
      if(arr[i] >= mn) {
        ct++;
      }
    }
    ct--;

    // cout << (ct*mn) + ct << endl;
    cout << "mn:" << mn << endl;
    cout << "ct :" << ct << endl;
  
  }

}

// 3
// 3
// 2 1 1 (2*1) + 2 = 4
// 3
// 0 5 0 (1*0) + 1 = 1
// 4
// 3 0 2 1 (3*0) + 3 = 3

// 3 1 2 3 ans=6
