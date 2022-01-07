#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    map<int, int> hash;
    for(int i = 0; i < n; i++) {
        if(hash.size() < 2) {
            hash[arr[i]]++;
        }
        else {
            for(auto h: hash) {
                int second = k-h.first;
                auto temp = hash;
                temp[h.first]=0;
                // for(auto t: temp) {
                //     if(temp[second] != 0) {
                //         cout << " yes'";
                //         exit(0);
                //         break;
                //     }
                // }
                if(temp[second] != 0)
                cout << "yes";
            }
            hash[arr[i]]++;
        }
    }
    cout << "no";

    return 0;
}