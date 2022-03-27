#include <bits/stdc++.h>
#include <string>
using namespace std;
int chk(string str,int n)
{
    sort(str.begin(),str.end());
    for(int i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
            return 1;
    }
    return 0;
}
int main() {
    string s,c,ext="";
    char s1,c1,out[100];
    getline(cin,s);
    getline(cin,c);
    int l1,l2,i,j,k=0;
    l1=s.length();
    l2=c.length();
    if(chk(s,l1)==1)
        cout<<"New Language Error";
    else
    {
        for(i=0;i<l1;i++)
        {
            s1=tolower(s[i]);
            for(j=0;j<l2;j++)
            {
                c1=c[j];
                c1=tolower(c1);
                if(s1==c1)
                {
                    if(s1>=97&&s1<=122)
                    {
                        out[k]=s1;
                        k++;
                    }
                    else
                        ext+=s1;
                }
                if(c[j]==32)
                {
                    out[j]=' ';  
                }
            }
        }
        for(int p=0;p<=k;p++)
            cout<<out[p];
        cout<<ext;
    }
    return 0;
}

// lkahgfswetimncx96345@#) (
// Philacodist 2021