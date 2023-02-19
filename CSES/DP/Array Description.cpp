#include <bits/stdc++.h>
using namespace std;

// int solve(vector<int> &arr, int id) {
// 	if(id >= arr.size()) {
// 		for(auto i : arr) cout << i << " ";
// 			cout << endl;
// 		return 1;
// 	}

// 	if(id > 0 && arr[id] != 0 && arr[id-1] != 0 && abs(arr[id]-arr[id-1]) > 1) return 0;
// 	if(id < arr.size()-1 && arr[id] != 0 && arr[id+1] != 0 && abs(arr[id] - arr[id+1]) > 1) return 0; 

// 	if(arr[id] != 0) return solve(arr, id+1);

// 	int curValue = arr[id], ans = 0;
// 	for(int i = arr[id-1]-1; i <= arr[id-1]+1; i++) {
// 		arr[id] = i;
// 		ans += solve(arr, id+1);
// 	}

// 	return ans;
// }

 vector<vector<string>> res;
    vector<string> te;
    unordered_map<string, int> mp;
    string b;
    void dfs(string s)  // Step 2
    {
        te.push_back(s);
        if (s == b)
        {
            vector<string> x = te;
            reverse(x.begin(), x.end());
            res.push_back(x);
            te.pop_back();
            return;
        }
        int cur = mp[s];
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            for (char cc = 'a'; cc <= 'z'; cc++)
            {
                s[i] = cc;
                if (mp.count(s) && mp[s] == cur - 1)
                    dfs(s);
            }
            s[i] = c;
        }
        te.pop_back();
        return;
    }
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string> &wordList)
    {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        b = beginWord;
        queue<string> q;
        int k = beginWord.size();
        q.push({beginWord});
        mp[beginWord] = 0;
        while (!q.empty())  // Step 1
        {
            int n = q.size();
            while (n--)
            {
                string t = q.front();
                q.pop();
                int x = mp[t] + 1;
                for (int i = 0; i < k; i++)
                {
                    string temp = t;
                    for (char ch = 'a'; ch <= 'z'; ch++)
                    {
                        temp[i] = ch;
                        if (!mp.count(temp) && dict.count(temp))
                            mp[temp] = x, q.push(temp);
                    }
                }
            }
        }
        if (mp.count(endWord))
            dfs(endWord);
        return res;
    }

int main() {

	// int n, m; cin >> n >> m;
	// vector<int> arr(n);
	// for(int i = 0; i < n; i++)
	// 	cin >> arr[i];

	// cout << solve(arr, 0);


	string s = "damp", t = "like";
	vector<string> arr = {"dump","lump","lamp","limp","lime","light"};

	vector<vector<string>> tt = findLadders(s, t, arr);

	cout << tt.size();
	for(auto i : tt) 
{
	for(auto k : i) cout << k << " ";
		cout << endl;
}


	return 0;
}
