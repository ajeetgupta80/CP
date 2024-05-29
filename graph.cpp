
// -------------------------------------  ajeet gupta ---------------------------------------------
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>

using namespace std;




// namespace std2{
//     int age = 19;
// }
// namespace std3{
//     int age = 20;
// }

// using namespace std3;

struct Edge{
    int src;
    int dest;
};

class Graph
{
  public:  
    vector<vector<int>> adjlist;
    Graph(vector<Edge> const &edges, int n){
       
         for(auto &edge:edges){
            adjlist[edge.src].push_back(edge.dest);
         }
    }
   
};



int main(){
     // int n;
     // cin >>n;
     // vector<Edge> edges;
     // for(int i =0; i<n; ++i){
     //    int x, y;
     //    cin>> x >> y;
     //    edges.push_back({x,y});
     // }
     
     // Graph graph(edges, n);
  
   
   
  

}
