#include <bits/stdc++.h>
using namespace std;

// // int main() {
// //  int t;
// //  cin>>t;
// //  while(t--){
// //     int n;
// //     string str2;
// //     cin>>n>>str2;
// //     string str1=str2;
// //     reverse(str2.begin(),str2.end());
// //     int n1 = str1.length();
// //     int n2= str2.length();

// //     vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
// //     for(int i=1;i<=n1;i++){
// //         for(int j=1;j<=n2;j++){
// //             if(str1[i-1] == str2[j-1]){
// //                 dp[i][j]=1+dp[i-1][j-1];
// //             }
// //             else{
// //                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
// //             }
// //         }
// //     }

// //     // for(auto i : dp) {
// //     //     for(auto j : i)
// //     //         cout << j << " " ;
// //     //     cout << endl;
// //     // }

// //     int i = n1;
// //     int j = n2;
// //     string ans="";
// //     while(i > 0 && j > 0){
// //         if(str1[i-1] == str2[j-1]){
// //             ans = str1[i-1] + ans;
// //             i--;
// //             j--;
// //         }
// //         else if(dp[i-1][j] > dp[i][j-1]){
           
// //             i = i-1;
// //         }
// //         else{
        
// //             j = j-1;
// //         }
// //     }
// //     cout<< ans <<endl;
// //  }
// //  return 0;
// // }









// #include <iostream>
// #include <vector>
// #include <bits/stdc++.h>
// using namespace std;

// #define ll              long long
// #define lli             long long int
// #define vi              vector<int>
// #define vs              vector<string>
// #define pb              push_back
// #define pii             pair<int,int>
// #define mp              make_pair
// #define mii             map<int,int>
// #define pqb             priority_queue<int>
// #define pqs             priority_queue<int,vi,greater<int>>
// #define setbits(x)      __builtin_popcountll(x)
// #define zrobits(x)      __builtin_ctzll(x)
// #define mod             1e9+7
// #define inf             1e18
// #define ps(x,y)         fixed<<setprecision(y)<<x
// #define mk(arr,n,type)  type *arr=new type[n];
// #define w(x)            int x; cin>>x; while(x--)
// #define debug(x) cout << #x << " " << x << endl;
// #define endl "\n"
// #define M 1000000007

// int dp[101][101];
// int slv(vector<int> &arr, int n, int sum) {

//     if(n <= 0) return 0;
//     if(sum <= 0) return 0;
//     if(dp[n][sum] != -1) return dp[n][sum];
//     if(arr[n-1] <= sum) {
//         return dp[n][sum] = max(1+slv(arr, n-1, sum-arr[n-1]) , slv(arr, n-1, sum));
//     }
//     return dp[n][sum] = slv(arr, n-1, sum);
    
// }

// void solve1() {

//     int n, cost; cin >> n >> cost;
//     vector<int> arr(n);
//     for(int i= 0; i < n; i++)
//         cin >> arr[i];

//     // sort(arr.begin(), arr.end());
//     int odd = 0;
//     int even = 0;
//     int ans = 0;
//     vector<int> k;
//     for(int i = 0; i < n-1; i++) {
//         if(arr[i] % 2 == 0) even++;
//         else odd++;

//         if(odd == even) {
//             int diff = abs(arr[i+1]-arr[i]);
//             if(diff <= cost) {
//                 // debug(diff);
//                 // debug(i);
//                 odd = 0;
//                 even = 0;
//                 k.push_back(diff);
//             }
//         }
//     }

//     // for(auto i : k)
//     //  cout << i << " ";
//     // cout << endl;
//     memset(dp, -1, sizeof(dp));
//     cout << slv(k, k.size(), cost) << endl;
//     // cout << ans << endl;

// }

// void solve(){ 
//     ll n; 
//     cin>>n; 
//     vector<ll> a(n);
//     for(ll i = 0; i < n ;i++)
//         cin >> a[i]; 

//     multiset<ll> s;
//     for (ll i=0;i<n;i++) { 
//         s.insert(a[i]); 
//     } 

//     // for(auto i : s)
//     //     cout << i << " ";
//     // cout << endl;

//     ll res = 1, ptr = 1; 
//     while (s.size() > 0){ 
//         auto i = s.lower_bound(ptr); 
//         if (i != s.end()){ 
//             // cout<< ptr << " "<< *i <<endl; 
//             s.erase(i); 
//             ptr++; 
//         }
//         else{ 
//             ptr = 1; 
//             res++; 
//         } 
//     } 
//     cout<<res<<endl; 
// } 

// // int32_t main()
// // {
// //  w(t) {
// //      solve();
// //     }
// //     return 0;
// // }
// #include<bits/stdc++.h>
// #define endl "\n"
// #define M 1000000007
 
// using namespace std;
 
// int power(int a, int b);
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     w(t) {
//         solve();
//     }
 
// }

// int power(int x,int n){
//     // write your code here
//     if (n == 0)
//         return 1;
//     if(n == 1)
//         return x;
    
//     int pow = power(x, n/2);
//     int ans = pow * pow;
    
//     if(n % 2 == 1)
//         ans *= x;
//     return ans;
// }







// // #include <bits/stdc++.h> 
// // #define fastio ios_base::sync_with_stdio(false), cin.tie(NULL); 
// // #define int long long 
// // using namespace std; 

// // void solve(){ 
// //     int n; 
// //     cin>>n; 
// //     vector<int> a(n);
// //     for(int i = 0; i < n ;i++)
// //         cin >> a[i]; 

// //     multiset<int> s;
// //     for (int i=0;i<n;i++) { 
// //         s.insert(a[i]); 
// //     } 

// //     // for(auto i : s)
// //     //     cout << i << " ";
// //     // cout << endl;

// //     int res = 1, ptr = 1; 
// //     while (s.size() > 0){ 
// //         auto i = s.lower_bound(ptr); 
// //         if (i != s.end()){ 
// //             cout<< ptr << " "<< *i <<endl; 
// //             s.erase(i); 
// //             ptr++; 
// //         }
// //         else{ 
// //             ptr = 1; 
// //             res++; 
// //         } 
// //     } 
// //     cout<<res<<endl; 
// // } 
 
// // signed main(){ 
// //     fastio 
// //     int t; 
// //     t = 1; 
// //     cin>>t; 
// //     while(t--){ 
// //   solve(); 
// //  } 
// // }





int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
    string s;
    cin >> n >> k >> s;

    map<char, int> mp;
     int zero=0,one=0;
     for(auto it:s)
     {
         if(it=='0') zero++;
         else one++;
     }
    mp['1'] = one;
    mp['0'] = zero;

    int maxi=max(zero, one);
    int mini=min(zero, one);
    int diff=  maxi-mini ;

    int pl = 0;
    if (diff % k)
    {
        pl++;
    }

    diff /= k;
    diff += pl;

    cout << diff << endl;
    }
    return 0;
}