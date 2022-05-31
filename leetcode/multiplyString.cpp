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

string multiply(string s, char t) {
	int carry = 0;
	string ans = "";
	int b = t-'0';
	for(int i = 0; i < s.length(); i++) {
		int a = s[i]-'0';
		int temp = (a*b)+carry;
		// debug(temp);
		// carry = 0;
		if(temp > 9) {
			carry = temp/10;
		}
		else
			carry = 0;
		ans.push_back(temp%10+'0');
		// debug(ans);
	}
	if(carry != 0)
		ans.push_back(carry+'0');
	reverse(ans.begin(), ans.end());
	return ans;
}

string addition(string s, string t) {
    if(s == "")
        return t;
    string ans = "";
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    int i = 0;
    int j = 0;
    
    int carry = 0;
    while(i < s.length() && j < t.length()) {
        int a = s[i]-'0';
        int b = t[j]-'0';
        int temp = a+b+carry;
        ans.push_back(temp%10 + '0');
        carry = temp/10;
        i++;
        j++;
    }
    while(i < s.length()) {
        int a = s[i]-'0';
        int temp = a+carry;
        ans.push_back(temp%10 + '0');
        carry = temp/10;
        i++;
    }
    while(j < t.length()) {
        int a = t[j]-'0';
        int temp = a+carry;
        ans.push_back(temp%10 + '0');
        carry = temp/10;
        j++;
    }
    if(carry != 0)
        ans.push_back(carry+'0');
    reverse(ans.begin(), ans.end());
    return ans;
}

void solve()
{
	string s, t;
	cin >> s >> t;
	reverse(s.begin(), s.end());
	reverse(t.begin(), t.end());
	
	string final = "";
	for(int i = 0; i < t.length(); i++) {
		string ans = multiply(s, t[i]);
		for(int k = 0; k < i; k++)
			ans.push_back('0');
		final = addition(final, ans);
		// debug(ans);
	}
	
	debug(final);
	
	// // string ans = "";
	// string final = "";
	// for(int i = 0; i < t.length(); i++) {
	// 	string ans = multiply(s, t[i]);
	// 	reverse(ans.begin(), ans.end());
	// 	// debug(ans);
	// 	for(int k = 0; k < i; k++)
	// 		ans.push_back('0');
	// 	debug(ans);
	// 	final = addition(final, ans, i);
	// 	debug(final);
	// 	cout << endl << "---" << endl;
	// 	// debug(ans);
	// }
	// // string ans = multiply(s, t[0]);
	// // reverse(ans.begin(), ans.end());
	// // cout << ans;
	// reverse(final.begin(), final.end());
	// cout << final;
}

int32_t main()
{
	//w(t) {
	    solve();
    // }
    return 0;
}