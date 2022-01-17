#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {   
        
    long long n,a=0,b=1,s=0;
        cin>>n;
        while(s <= n)
        {
            s=a+b;
            if(s==n)
            break;
            a=b;
            b=s;
            cout << s << " - ";
        }
        if(s==n)
        cout<<"IsFibo"<<endl;
        else
        cout<<"IsNotFibo"<<endl;
    }
return 0;
}