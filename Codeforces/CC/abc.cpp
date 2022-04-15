#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;

     vector<int> hash(125, 0);
        for(int i = 0 ;i < str.length(); i++) {
            hash[str[i]]++;
        }
        
        int mx = 0;
        for(int i = 0; i < 125; i++) {
            cout << hash[i] << " ";
            mx = hash[i] > mx ? hash[i] : mx;
        }
            
            cout << endl;
        for(int i = 0; i < 125; i++) {
            if(hash[i] == mx) {
                cout << (char)i;
                break;
            }
        }
            cout << endl;
        cout << mx;

    return 0;
}