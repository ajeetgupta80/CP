
// -------------------------------------  ajeet gupta ---------------------------------------------
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>


using namespace std;



void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


void solve()
{
    // adjacency matrix
    int n,m;
    cin>>n>>m;
    int adj[n][n];
    for(int i =0; i<n; ++i)
    {
        int u,v;
        cin >> u >> v;
        adj[u][v]=1;                                                        
        adj[v][u]=1;
    }


}
    





   

int main(){
   init_code();
   
   int n,m;
   cin>> n >> m;
   int adj[n+1][m+1];
   vector<int> graph[n];
   vector<pair<int,int>> grp[n];
   for(int i =0; i<n; ++i)
   {
      int u,v,wt;
      cin >> u >> v;
      cin >>wt;
      graph[u].push_back(v);
      graph[v].push_back(u);
      // if weighted
      grp[u].push_back({v,wt});
      grp[v].push_back({u,wt});
     
   }


  
  
   
  

}
