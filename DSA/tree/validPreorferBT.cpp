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

bool check(stack<string> s) {
    if(s.size() < 3) return false;
    string c1 = s.top();
    s.pop();
    string c2 = s.top();
    s.pop();
    string c3 = s.top();
    return (c1 == "#" && c2 == "#" && c3 != "#");
}

void printSt(stack<string> s){
    while(!s.empty()) {
        cout << s.top() << " " ;
        s.pop();
    }
    cout << endl;
}

void solve()
{
	string str;
	cin >> str;
    vector<string> arr;
    string temp = "";
    for(int i= 0; i < str.length(); i++) {
        if(i == str.length() -1) {
            temp.push_back(str[i]);
            arr.push_back(temp);
        }
        if(str[i] == ',') {
            arr.push_back(temp);
            temp.clear();
        }
        else
            temp.push_back(str[i]);
    }
    
    for(auto i : arr)
        cout << i ;
    cout <<endl << endl;
    
    if(str == "#")  {cout << "YES" << endl; return;}
    if(str.length() == 2) { cout << "NO" << endl; return;}
    if(str.length() == 3) {
        if(isdigit(str[0]) && str[1] == '#' && str[2] == '#') { cout << "YES" << endl; return; }
        else {cout << "NO" << endl; return;}
    }

    
    stack<string> s;
    for(auto i : arr) {
        s.push(i);
        if(s.size() >= 3) {
            while(check(s)) {printSt(s);
                s.pop();
                s.pop();
                s.pop();
                s.push("#");
            }
        }
        
    }
    
    debug(s.size());
    while(!s.empty()) {
        cout << s.top() << " " ;
        s.pop();
    }
    
    cout << "lkjsd";
	
}

int32_t main()
{
	// w(t) {
	    solve();
    // }
    return 0;
}