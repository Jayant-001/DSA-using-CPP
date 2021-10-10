#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        string s;
        cin >> s;

        int flag = 0, hash_table[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            ++hash_table[s[i] - 'a'];
        }

        for (int i = 0; i < 26; i++) {
            if(hash_table[i] >= 2) {
                flag = 1;
            }
        }

        if(flag == 1) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }

    }
    
    return 0;
}