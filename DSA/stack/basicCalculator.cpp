// leetcode 224

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

int prec(char c) {
	if(c == '^')
		return 3;
	else if(c == '/' || c == '*')
		return 2;
	else if(c == '+' || c == '-')
		return 1;
	else
		return -1;
}

string infixToPostfix(string s) {
	stack<char> st;
	string ans = "";
	for(auto i : s) {
		if(i == ' ') {
			ans.push_back(' ');
			continue;
		}
		if(isdigit(i))
			ans.push_back(i);
		else if(i == '(')
			st.push(i);
		else if(i == ')') {
			while(!st.empty() && st.top() != '(') {
				ans.push_back(st.top());
				st.pop();
			}
			if(!st.empty())
				st.pop();
		}
		else {
			// operator
			while(!st.empty() && prec(st.top()) >= prec(i)) {
				ans.push_back(st.top());
				st.pop();
			}
			st.push(i);
		}
	}
	while(!st.empty()) {
		ans.push_back(st.top());
		st.pop();
	}
	return ans;
}

int evaluatePostfix(string s) {
	
	stack<char> st;
	for(auto i : s) {
		if(i == '+') {
			int b = st.top()-'0';
			st.pop();
			int a = st.top()-'0';
			st.pop();
			st.push(a+b);
		}
		else if(i == '-') {
			int b = st.top()-'0';
			st.pop();
			int a = st.top()-'0';
			st.pop();
			st.push(a-b);
		}
		else if(i == '*') {
			
		}
		else if(i == '/') {
			
		}
		else {
			st.push(i);
		}
	}
	cout << st.size() << endl;
	return st.top();
	
}

void solve()
{
	// string s = "1 + 1";
	string s = "(1+(4+5+2)-3)+(6+8)";
	
	string exp = infixToPostfix(s);
	cout << exp << endl;
	
	cout << evaluatePostfix(exp);
}
 
int32_t main()
{
    solve();
    return 0;
}