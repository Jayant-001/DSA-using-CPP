#include <bits/stdc++.h>
using namespace std;

int check(string str, vector<string> words) {
    
    int count = 0;
    map<char, vector<int>> m;
    int k = 0;
    for(auto s : str)
        m[s].push_back(k++);
    
    for(int i = 0; i < words.size(); i++) {
        string curWord = words[i];
        int latest = -1;
        for(int j = 0; j < curWord.length(); j++) {
            
            auto it = upper_bound(m[curWord[j]].begin(), m[curWord[j]].end(), latest);
            if(it == m[curWord[j]].end()) break;
            latest = *it;
            if(j == curWord.size()-1) count++;
        }
    }
    
    return count;
}


int main() {
    
    string s = "dsahjpjauf";
    vector<string> words = {"ahjpjau","ja","ahbwzgqnuk","tnmlanowax"};
    s = "abcde";
    words = {"a","bb","acd","ace"};
    
    cout << check(s, words);
    
    return 0;
}