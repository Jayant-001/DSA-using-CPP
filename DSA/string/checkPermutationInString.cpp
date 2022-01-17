#include <bits/stdc++.h>
using namespace std;

// time complexity = O(s * k)
bool check(string s, string k) {
    int n = s.length();
    int m = k.length();

    map<char, int> hash;
    for(int i = 0; i < k.length(); i++) {
        hash[k[i]]++;
    }

    for(int i = 0; i <= n-m; i++) {

        string temp = s.substr(i, m);
        cout << temp << endl;
        map<char, int> kHash;
        
        for(int i = 0; i < temp.length(); i++) {
            kHash[temp[i]]++;
        }
        
        if(kHash == hash)
            return true;
    }

    return false;    
}

bool check(int hash1[26], int hash2[26]) {
    for(int i = 0; i < 26; i++) 
        if(hash1[i] != hash2[i])
            return false;
    return true;
}

bool checkPermute(string s1, string s2) {

    int hash1[26] = {0};
    for(int i = 0; i < s1.length(); i++) {
        int index = s1[i] - 'a';
        hash1[index]++;
    }

    int i = 0;
    int hash2[26] = {0};
    int windowSize = s1.length();
    // for first window
    while(i < windowSize) {
        int index = s2[i] - 'a';
        hash2[index]++;
        i++;
    }

    if(check(hash1, hash2))
        return true;

    while(i < s2.length()) {
        char prevChar = s2[i-windowSize];
        hash2[prevChar - 'a']--;
        char nextChar = s2[i];
        hash2[nextChar - 'a']++;
        i++;
        if(check(hash1, hash2))
            return true;
    }

    return false;
}

int main() {

    string s1, s2;
    cin >> s1 >> s2;

    cout << checkPermute(s1, s2);

    return 0;
}