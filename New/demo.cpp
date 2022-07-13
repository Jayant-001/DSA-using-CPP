/////////1111111111111111
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int diff = abs(a-b);
	if(diff % 2 == 1)
	cout << -1 << endl;
	else 
		{
			int ans = diff/2 ;
			ans += min(a, b);
			cout << ans <<endl;
		}
}




///////2222222222222222
#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> arr) {
	for(auto i : arr)
		if (i == 0) return false;
	return true;
}
int main() {
	int n; cin >> n;
	string s;
	cin >> s;

	if(n < 26) {
		cout << "NO";
		return 0;
	}

	vector<int> arr(26, 0);
	for(auto i : s) {
		char c = tolower(i);
		int k = c-97;
		cout << k << " ";
		arr[k] = 1;
	}
	if(check(arr)) cout << "YES";
	else cout << "NO";
}








/////////---------------- 3333333

#include<bits/stdc++.h>
using namespace std;
long long gcd(long long int a, long long int b) {
    if(b == 0)
    return a;
    return gcd(b, a%b);
}
long long int lcm(long long int a, long long int b) {
    return (a / gcd(a,b)) * b;
}
long long solve (long long a, long long b, long long N) {
   // Write your code here
   long long k = lcm(a, b);
   return k*N;
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long N;
        cin >> N;

        long long out_;
        out_ = solve(a, b, N);
        cout << out_;
        cout << "\n";
    }
}





///////// 5555555555555555
#include<bits/stdc++.h>
using namespace std;
vector<int> p;
vector<int> ans;
bool check(string s) {
    if(s.length() == 1) return true;
    int i = 0; 
    int j = s.length()-1;
    while(i < j) {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

void getPrime(int a, int b) {
    vector<int> arr(b+1, 1);
    for(int i = 2; i < b+1; i++) {
        for(int j = i+i; j < b+1; j+=i)
            arr[j] = 0;
    }
    for(int i = 2; i < arr.size(); i++) {
        if(i >= a && arr[i] == 1) p.push_back(i);
    }

}

int palPrime (int L, int R) {
//    // Write your code here
//    int ct = 0;
//    for(auto i : prime) {
//        string s = to_string(i);
//     //    cout << s << " ";
//     //    if(check(s)) ct++;
//         string t = s;
//         reverse(t.begin(), t.end());
//         if(s == t) ct++;
//    }
//     // cout << endl;
//     return ct;
int ct = 0;
    for(auto i : ans) {
        if(i >= L && i <= R) ct++;
    }
return ct;
   
}

int main() {

    getPrime(0, 100000);
    for(auto i : p)
        {
            string k = to_string(i);
            if(check(k)) ans.push_back(i);
        }
    // for(auto i : ans)
    //     cout << i << " - ";
    // cout << ans.size() <<  endl;

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int L;
        cin >> L;
        int R;
        cin >> R;

        int out_;
        out_ = palPrime(L, R);
        cout << out_;
        cout << "\n";
    }
}