#include <iostream>
using namespace std;
#define lli long long int 

// int fibCount(ll a, ll b) {
    
//     int ct = 0;
//     ll n1 = 1;
//     ll n2 = 2;
    
//     while(n2 != b || n2 < b) {
//         if(n2 > a && n2 < b)
//             ct++;
//         ll t = n1;
//         n1 = n2;
//         n2 = t + n2;
//         if(n2 > b)
//             return ct;
        
//     }
    
//     return ct;
// }

lli countFibs(lli low, lli high)
{
    lli f1 = 1, f2 = 2, f3 = 3;
 
    int result = 0;
    
    if(low+1 == high) 
        return 0;
 
    while (f1 <= high)
    {
        if (f1 >= low)
        result++;
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }
 
    return result;
}

int main() {
    
    int t;
    cin >> t;
    
    while(t--) {
        
    lli a, b;
    cin >> a >> b;
    cout << countFibs(a, b) << endl;
    
    }


    return 0;
}