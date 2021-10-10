#include <iostream>
#include <vector>
using namespace std;

void subsetArray(vector<int> arr, vector<int> res) {

    if(arr.size() == 0) {
        for(int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        return;
    }

    // create two array to store current output
    vector<int> out1 = res;
    vector<int> out2 = res;

    // including 0th element
    out2.push_back(arr[0]);

    // remove 0th element from input array
    arr.erase(arr.begin()+0);

    // recall function with excluing array
    subsetArray(arr, out1);

    // recall function with including array
    subsetArray(arr, out2);

}

int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> s;
    subsetArray(v, s);

    return 0;
}