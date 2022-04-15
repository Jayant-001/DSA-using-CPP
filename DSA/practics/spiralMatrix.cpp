// https://leetcode.com/problems/spiral-matrix/

// https://leetcode.com/problems/spiral-matrix-ii/submissions/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	
        int m ,n; 
        cin >> m >> n;
        vector<vector<int>> ans( m, vector<int> (n));
	
		int l = 0;
		int r = n-1;
		int t = 0;
		int b = m-1;
		int d = 0;
		
		// if(m == 0)
		// 	return ans;
		int k = 1;
		while(l <= r && t <= b) {
			
			if(d == 0) {
				
				for(int i = l; i <= r; i++) {
					ans[t][i] = k;
					k++;
				}
				t++;
				d = 1;
			}
			else if(d == 1) {
				
				for(int i = t; i <= b; i++) {
					ans[i][r] = k; 
					k++;
				}
				r--;
				d = 2;
			}
			else if(d == 2) {
				
				for(int i = r; i >= l; i--) {
					ans[b][i] = k;
					k++;
				}
				b--;
				d = 3;
			}
			else if(d == 3) {
				
				for(int i = b; i >= t; i--) {
					ans[i][l] = k;
					k++;
				}
				l++;
				d = 0;
			}
		}
		
		for(auto i : ans) {
			for(auto j : i)
				cout << j << " ";
			cout << endl;
		}
	
	return 0;
}