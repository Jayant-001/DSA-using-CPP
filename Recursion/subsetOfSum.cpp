#include <iostream>
#include <vector>
using namespace std;

vector<int> res;
vector<int> getSubsetSum(vector<int> a, int l, int r, int sum = 0) {

    if(l > r) {
        res.push_back(sum);
        return res;
    }
    
    // including subset a[l]
    getSubsetSum(a, l+1, r, sum + a[l]);

    // excluding subset a[l]
    getSubsetSum(a, l+1, r, sum);


    return res;

}

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> res = getSubsetSum(arr, 0, n-1);

    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    cout << endl << "Size -> " << res.size();


    return 0;
}