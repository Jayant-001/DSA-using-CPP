#include <iostream>
#include <vector>
using namespace std;

// https://practice.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1
void generate(int zero, int one, int n, string op, vector<string> &v) {
    
    if(n == 0) {
        v.push_back(op);
        return;
    }

    if(n != 0) {
        string res = op;
        res.push_back('1');
        generate(zero, one+1, n-1, res, v);
    }

    if(zero < one) {
        string res = op;
        res.push_back('0');
        generate(zero+1, one, n-1, res, v);
    }

}

int main() {

    int n;
    cin >> n;
    vector<string> v;

    generate(0, 0, n, "", v);
    
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }


    return 0;
}


