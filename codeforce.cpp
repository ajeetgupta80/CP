// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
#define nline endl
using namespace std;



int main() {
    int t;
    cin >>t;
    while(t--)
    {
        string k;
        cin >> k;
         map<char,int > mp;
         priority_queue<int> pq;
         for(int i =0; i<k.size(); ++i )
         {
             mp[k[i]]++;
             pq.push(mp.second);
         }
  int p = pq.top();
   if(p==1){
   cout<<4<<nline;
  }else if(p==4){
   cout<<-1<<nline;
  }else if(p == 3)
  {
   cout<<6<<nline;
  }else if(p == 2)
  {
   cout<<4<<nline;
  }
        
    }

    return 0;
}



