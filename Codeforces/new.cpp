// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;


//  bool isvalid(int x,int y,int n){
//      if(x>=0 && x<n && y>=0 && y<n){
//          return true;
//      }
//      return false;
//  }
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int x,y;
//         cin>>x>>y;
//         x--;
//         y--;
//         vector<pair<int,int>>l;
//         l.push_back({x-2,y+1});
//         l.push_back({x+1,y+2});
//         l.push_back({x+2,y-1});
//         l.push_back({x-1,y-2});
        
//         vector<pair<int,int>>r;
//         r.push_back({x-2,y-1});
//         r.push_back({x-1,y+2});
//         r.push_back({x+2,y+1});
//         r.push_back({x+1,y-2});

//         int count=0;
//         if((x==0 && x%7==0) || (y==0 && y%7==0)){
//             count=1;
//         }
//         else if(((x>=1 && x<=6) || (y==0 && y==7)) || ((y>=1 && y<=6) || (x==0 && x==7))){
//             count=2;
//         }else if(((x>=1 && x<=6) || (y==1 && y==6)) || ((y>=1 && y<=6) || (x==1 && x==6))){
//             count=3;
//         }else{
//             count=3;
//         }
//         int sum=0;
//         vector<vector<int>>ans(8,vector<int>(8,0));
//         for(auto i : l){
//             if(isvalid(i.first , i.second , 8 ) && count!=0){
//                 ans[i.first][i.second] = 2;
//                 count--;
                
//             }
//         }
//         for(auto i : r){
//             if(isvalid(i.first , i.second , 8 ) && count!=0){
//                 ans[i.first][i.second] = 2;
//                 count--;
                
//             }
//         }
//         ans[x][y]=1;
//         for(int i=0;i<8;i++){
//             for(int j=0;j<8;j++){
//                 cout<<ans[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//     }
    
//  return 0;
// }

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


 bool isvalid(int x,int y,int n){
     if(x>=0 && x<n && y>=0 && y<n){
         return true;
     }
     return false;
 }
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        vector<pair<int,int>>l;
        l.push_back({x-2,y+1});
        l.push_back({x+1,y+2});
        l.push_back({x+2,y-1});
        l.push_back({x-1,y-2});
        
        vector<pair<int,int>>r;
        r.push_back({x-2,y-1});
        r.push_back({x-1,y+2});
        r.push_back({x+2,y+1});
        r.push_back({x+1,y-2});
        int count=0;
        if((x==0 && x%7==0) || (y==0 && y%7==0)){
            count=1;
        }
        else if(((x>=1 && x<=6) || (y==0 && y==7)) || ((y>=1 && y<=6) || (x==0 && x==7))){
            count=2;
        }else if(((x>=1 && x<=6) || (y==1 && y==6)) || ((y>=1 && y<=6) || (x==1 && x==6))){
            count=3;
        }else{
            count=3;
        }
        int sum=0;
        vector<vector<int>>ans(8,vector<int>(8,0));
        for(auto i : l){
            if(isvalid(i.first , i.second , 8 ) && count!=0){
                ans[i.first][i.second] = 2;
                count--;
                
            }
        }
        for(auto i : r){
            if(isvalid(i.first , i.second , 8 ) && count!=0){
                ans[i.first][i.second] = 2;
                count--;
                
            }
        }
        ans[x][y]=1;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
 return 0;
}