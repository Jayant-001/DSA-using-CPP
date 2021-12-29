#include <bits/stdc++.h>
using namespace std;

void permutation(vector<int> v, vector<int> res) {

    if(v.size() == 0) {
        for(auto i : res)
            cout << i << " ";
        cout << endl;
        return;
    }

    for(int i = 0; i < v.size(); i++) {
        int t = v[i];
        v.erase(v.begin()+i);
        res.push_back(t);
        permutation(v, res);
    }

}

int main() {

    vector<int> v = {1,2,3,4,5};
    
    vector<int> res;
    // permutation(v, res);

    v.erase(v.begin()+2);

    for(auto i : v)
        cout << i << " ";

    return 0;
}