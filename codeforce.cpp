#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // code start here
  
  int t = 0;
  cin>>t;
  while(t--){
    // algorithm used
    int cl;
    cin>>cl;
 
    unordered_map<int,int> s;
    for(int i = 0; i < 4; ++i)
    {
      int l_digit = cl % 10;
      cl = cl / 10;
      s[l_digit]++;
    }
 
    if(s.size()==2){
      vector <int> x;
      for (auto value : s)
      {
        x.push_back(value.second);
      }
      if(x[0]!=x[1]){
        cout<<6<<endl;
      }
      else{
        cout<<4<<endl;
      }
    }
    else if(s.size()==3){
      cout<<4<<endl;
    }
    else if(s.size()==4){
      cout<<4<<endl;
    }
    else{
      cout<<-1<<endl;
    }
  }
 
  return 0;
}



