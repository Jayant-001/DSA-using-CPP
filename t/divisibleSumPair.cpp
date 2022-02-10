#include<bits/stdc++.h>
using namespace std;

void getPair(int arr[], int n, int k, vector<pair<int, int>> &ans) {

    for(int i = 0; i < n-1; i++) {

        for(int j = i+1; j < n; j++) {
        	
        	int t = arr[i] + arr[j];

            if(t % k == 0)
            	ans.push_back(make_pair(arr[i], arr[j]));
        }
    }

}

int main() {

    int n, k;
    cin >> n >> k;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<pair<int, int>> ans;

    getPair(arr, n, k, ans);
    cout << "size: " << ans.size() << endl;
    
    for(int i = 0; i < ans.size(); i++) {
    	cout << ans[i].first << " " << ans[i].second << endl;
    }

    return 0;
}