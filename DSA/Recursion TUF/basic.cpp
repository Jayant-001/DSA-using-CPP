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

void printName5Time(int n) {
	if(n <= 0)
		return ;
	cout << "jayant" << endl;
	printName5Time(n-1);
}

// print linearly 1-N;
void print1toN(int n) {
	if(n == 0)
		return;
	print1toN(n-1);
	cout << n << endl;;
}

// print linearly N to 1
void printNto1(int n) {
	if(n == 0)
		return;
	cout << n << endl;
	printNto1(n-1);
}

// sum all numbers till N
int sumTillN(int n) {
	if(n == 1)
		return 1;
	if(n == 0)
		return 0;
	
	return n + sumTillN(n-1);
}

int factorial(int n) {
	
	if(n <= 1)
		return 1;
	
	return n * factorial(n-1);
	
}

void solve()
{
	
	// printName5Time(5);
	// print1toN(5);
	// printNto1(5);
	
	cout << sumTillN(5) << endl;
	cout << factorial(6) << endl;
	
}
 
int32_t main()
{
    solve();
    return 0;
}