// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;

//         if(n>m||(!(n&1)&&m&1)){
//             cout<<"No"<<endl;
//             continue;
//         }
//         cout<<"Yes"<<endl;
//         if(n==m){
//             for(int i=1;i<=n;i++) cout<<1<<" ";
//             cout<<endl;
//         }
//         else if(n&1){
//             for(int i=1;i<n;i++) cout<<1<<" ";
//             cout<<m-n+1<<endl;
//         }
//         else{
//             for(int i=1;i<=n-2;i++) cout<<1<<" ";
//             int k=(m-n+2)/2;
//             cout<<k<<" "<<k<<endl;
//         }
//     }
//     return 0;
// }




// int n = 2 * sc.nextInt();
//         char[] arr = sc.next().toCharArray();
//         Stack<Character> stack = new Stack<>();
//         int extra = 0, components = 0;
//         for (int i = 0; i < n; i++) {
//             if (arr[i] == '(') {
//                 stack.add('(');
//             }else if (!stack.isEmpty() && stack.peek() == '(') {
//                 stack.pop();
//                 components++;
//                 if (stack.isEmpty()) {
//                     extra++;
//                 }
//             }else {
//                 components += stack.size();
//                 stack.clear();
//             }
//         }
//         out.println(components - extra + 1);


#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < 2 * n - 1; i++) {
            if (s[i] == '(' && s[i + 1] == ')') {
                c++;
            }
        }
        cout << n - c + 1 << endl;
    }
}