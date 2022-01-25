// https://practice.geeksforgeeks.org/problems/additive-sequence/1/?category[]=Recursion&category[]=Recursion&problemStatus=unsolved&difficulty[]=1&page=1&query=category[]RecursionproblemStatusunsolveddifficulty[]1page1category[]Recursion
#include <bits/stdc++.h>
using namespace std;

bool find_rec(long long n1, long long n2, string ros, bool found) {
    if(ros.length() == 0 && found) 
        return true;
    
    string n3 = to_string(n1+n2);
    int idx = min(ros.length(), n3.length());
    if(ros.substr(0, idx) == n3) 
        return find_rec(n2, stol(n3), ros.substr(idx), true);
    return false;
}

bool checkAdditive(string s) {

    int n = s.length();
    for(int i = 1; i < n-1; i++) {
        long long n1 = stol(s.substr(0, i));
        if(to_string(n1) != s.substr(0, i))
            break;
        for(int j = i+1; j < n; j++) {
            long long n2 = stol(s.substr(i, j-i));
            if(to_string(n2) != s.substr(i, j-i))
                break;

            bool found = find_rec(n1, n2, s.substr(j), false);
            if(found) return true;
        }
    }
    return false;
}


int main() {

    int t;
    cin >> t;
    while(t--) {

        string s;
        cin >> s;

        cout << checkAdditive(s) << endl;

    }

    return 0;
}