#include <bits/stdc++.h>
using namespace std;

int main() {

    string s, part;
    cin >> s >> part;
    int n = s.length();
    int k = part.length();

    int j = 0;
    // cout << s.substr(j, j+k);
    while(j < s.length()-k+1) {
        string t = s.substr(j, k);
        cout << t << " ";

        if(s.length() < k)
            break;

        if(t == part) {
            s.erase(j, k);
            if(s.length() == 0)
                break;
            if(j != 0)
                j = 0;
        }
        else 
            j++;
            cout << s << endl;
    }

    cout << s;

    return 0;
}