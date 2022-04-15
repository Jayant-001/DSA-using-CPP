#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> arr, int n) {
	vector<int> leftMin(n);
	leftMin[0] = arr[0];
	for(int i = 1; i < n; i++) 
		leftMin[i] = min(arr[i], leftMin[i-1]);
	
	stack<int> s;
	for(int j = n-1; j >= 0; j--) {
		if(arr[j] > leftMin[j]) {
			while(!s.empty() && s.top() <= leftMin[j])
				s.pop();
			if(!s.empty() && arr[j] > s.top())
				return true;
			s.push(arr[j]);
		}
	}
	return false;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	cout << check(arr, n);
	
}
 
int32_t main()
{
    solve();
    return 0;
}