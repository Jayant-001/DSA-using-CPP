#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
  public:
  
    vector<int> parent, rank;
    
    DisjointSet(int n) {
      parent.resize(n+1);
      rank.resize(n+1, 0);
      
      for(int i = 1; i <= n; i++) {
        parent[i] = i;
      }
    }
    
    int findParent(int node) {
      if(parent[node] == node) return node;
      return parent[node] = findParent(parent[node]);
    }
    
    void unionSets(int u, int v) {
      int p_u = findParent(u);
      int p_v = findParent(v);
      if(p_v != p_u)
        parent[p_u] = p_v;
    }
    
    void unionSetsByRank(int u, int v) {
      int p_u = findParent(u);
      int p_v = findParent(v);
      if(p_u == p_v) return;
      if(rank[p_u] < rank[p_v])
        parent[p_u] = p_v;
      else if(rank[p_v] < rank[p_u])
        parent[p_v] = p_u;
      else {
        parent[p_u] = p_v;
        rank[p_v]++;
      }
      
    }
  
};


int main() 
{
  
    DisjointSet ds(7);
    ds.unionSetsByRank(1, 2);
    ds.unionSetsByRank(2, 3);
    ds.unionSetsByRank(4, 5);
    ds.unionSetsByRank(6, 7);
    ds.unionSetsByRank(5, 6);
    
    if(ds.findParent(3) == ds.findParent(7))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
    
    ds.unionSetsByRank(3, 7);
    
    if(ds.findParent(3) == ds.findParent(7))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
    
    return 0;
}