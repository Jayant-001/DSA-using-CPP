#include <iostream>
using namespace std;

string reverse(string s, string res) {
    
    if(s.empty())
        return res;

    res.push_back(s[s.size()-1]);
    s.pop_back();
    return reverse(s, res);
}

int main() {

    string s = "jayant kumar";
    cout << reverse(s, "");

    return 0;
}