#include <iostream>
using namespace std;

// first method
void powerSet(string str, int l, int r, string res) {

    if(l > r) {
        cout << res << endl;
        return;
    }

    // including character
    powerSet(str, l+1, r, res+str[l]);

    // excluding character
    powerSet(str, l+1, r, res);
}


// second method
void subSet(string s, string res){

    if(s.size() == 0) {
        cout << res << endl;
        return;
    }

    string out1 = res;
    string out2 = res;

    // including 0 index character
    out2.push_back(s[0]);

    s.erase(s.begin()+0);

    subSet(s, out1);
    subSet(s, out2);

}


int main() {

    string s;
    cin >> s;

    // powerSet(s, 0, s.size()-1, "");
    subSet(s, "");

    return 0;

}