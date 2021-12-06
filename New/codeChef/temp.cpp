// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int lli;

// long long gcd(lli a, lli b)
// {
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }

// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }

// 5
// 10
// 2 6 3 4 7 2 10 3 2 1

// int main() {

// 	int n;
// 	// cin >> n;
// 	n = 3;

// 	x = n;
// 	vector<int> v;

// 	for(int i = n+1; i < 2*n; i++) {
// 		x++;

// 		int h = gcd(n, x);
// 		int l = n*x/h;
// 		v.append(abs(h-l));
// 	}

// 	int mn = INT_MAX;
// 	for(int i = 0; i < v.size(); i++) {

// 		mn = ()
// 	}

// }



// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;
// typedef long long int lli;
// lli gcd(lli a, lli b) {
// 	if(b == 0) 
//     {
// 		return a;
// 	}
// 	else return gcd(b, a%b);
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         lli n;
//         cin>>n;
//         lli x,g,l,temp,min,k;
//         min=LLONG_MAX;
//         vector<int> v;
//         x=n+1;
//         for(x; x<2*n; x++)
//         {
//             if(x%n != 0)
//             {
//                 g = gcd(x,n);
//                 l = (n*x)/g;
//                 temp = abs(g-l);
//                 if(temp<min)
//                 {   min = temp;
//                     k = x;
//                 }
//             }
//         }
//         cout<<k<<endl;  
//     } 
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {

	int k;
	cin >> k;
	int n;
	cin >> n;

	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr+n);
	int res = arr[n-1] - arr[0];
	int large = arr[n-1] - k;
	int small = arr[0] + k;
	int mn, mx;

	for(int i = 0; i < n-1; i++) {
		mx = max(arr[i] + k, large);
		mn = min(arr[i+1] - k, small);

		if(mn < 0)
			continue;
		else
			res = min(res, mx-mn);
	}

	cout << res;
	return 0;
}
