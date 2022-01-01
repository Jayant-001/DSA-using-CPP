#include <iostream>
#include <vector>
using namespace std;

//Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        vector<int> v;
        
        int cSum = arr[0];
        int l = 0;
        
        for(int i = 1; i <= n; i++) {
            
            while(cSum > s && l < i-1) {
                cSum -= arr[l++];
            }
            
            if(cSum == s) {
                v.push_back(++l);
                v.push_back(i);
                return v;
            }
            
            if(i < n) {
                cSum += arr[i];
            }
        }
        
        v.push_back(-1);
        return v;
    }

int main() {

    int n, sum;
    cin >> n >> sum;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = subarraySum(arr, n, sum);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    if(ans.size() == 0) {

        cout << endl << "not found";
    }
    return 0;
}