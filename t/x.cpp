#include <bits/stdc++.h>
using namespace std;

int fn(vector<int>& nums) {
        
        int n = nums.size();

        int c = 1;
        int k = 0;
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                c++;
                // cout << nums[i] << " ";
            }
            else 
                c = 1;
            // cout << c << " ";
            if(c > 2)
            {
                cout << i << " ";
                nums.erase(nums.begin()+(i));
                // c--;
                i--;
            k++;
            }
        }
        cout << endl;
        for(auto i : nums)
            cout << i << " ";

        cout << endl;
        return k;
    }

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << fn(arr);
}
