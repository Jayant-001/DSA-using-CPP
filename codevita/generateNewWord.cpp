#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define lli				long long int
#define vi              vector<int>
#define vs				vector<string>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1e9+7
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;

void serch(string key, string str) {

	map<char, int> word;
	for(auto it : str) {
		word[tolower(it)]++;
	}

	for(auto it : key) {
		if(word[it]) {
			int t = word[it];
			while(t--)
				cout << it;
		}
	}
	cout << " ";
}

vector<string> split(string str)
{
	vector<string> v;
    string word = "";
    for (auto x : str) 
    {
        if (x == ' ')
        {
            v.push_back(word);
            word = "";
        }
        else {
            word = word + x;
        }
    }
    v.push_back(word);
    return v;
}

void solve()
{

	string key, str;
	getline(cin, key);
	getline(cin, str);
	vector<string> v;

	map<char, int> m, word;

	for(auto it : key) {
		if(m[it]) {
			cout << "New Language Error";
			return;
		}
		m[it]++;
	}

	v = split(str);
	for(auto i : v)
		serch(key, i);

}

// palskdjfieuryt93516247oh
// Philacodist 2021
// abcdehdghijklmn@4682##
// TCS

// lkahgfswetimncx96345@#) (
// Philacodist 2021
int32_t main()
{
    solve();
    return 0;
}


