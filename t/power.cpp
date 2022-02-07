#include<iostream>
using namespace std;

int power(int x,int n){
    // write your code here
    if (n == 0)
    	return 1;
    if(n == 1)
        return x;
    
  	int pow = power(x, n/2);
  	int ans = pow * pow;
  	
  	if(n % 2 == 1)
  		ans *= x;
  	return ans;
}

int main(){
    int x,n; 
    cin>>x>>n;
    cout<<power(x,n);
}