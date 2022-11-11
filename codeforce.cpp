
// -------------------------------------ajeet gupta -------------------------------------------        
#include<iostream>
#include<cmath>
// #include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<math.h>                                                                                 
#include<string>
#include<unordered_set>
#include<cstring>
#include<map>
#include<stack>
#include<set>
// #include<queue>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>


 
// for iterator (*it).first == it->first for maps
// A TO Z --> 65 TO 90 ,  a to z --> 97 to 122
#define int               long  long
#define INF               1e18
#define nline             "\n"
#define sl                s.length()
#define pb                push_back
#define fr(a,b)           for(int i = a; i < b; i++)
#define rep(i,a,b)        for(int i = a; i < b; i++)
#define mod               1000000007
#define inf               (1LL<<60)
#define all(x)            (x).begin(), (x).end()
#define prDouble(x)       cout << fixed << setprecision(10) << x
#define triplet           pair<ll,pair<ll,ll>>
#define goog(tno)         cout << "Case #" << tno <<": "
#define fast_io           ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x)           int x; cin >> x
#define show(x)           cout<<x<<endl
const int Mod = 1e9+7;

/* 
sum upto n = (n*(n+1))/2 
sun upto n-1 = (n*(n-1)/2)  
(a+b)%M = ( (a%M) + (b%M) )% M
(a*b)%M = ( (a%M) * (b%M) )% M
(a-b)%M = ( (a%M) - (b%M) + M)% M  // extra +M for making positve
*/

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key


typedef long long ll;
typedef unsigned long long ull;


#ifndef ONLINE_JUDGE
#define debug(x) cerr <<#x <<" ";_print(x); cerr<<nline;
#else
#define debug(x)
#endif

// void _print(int a ){ cerr<<a; }
void _print(string a ){ cerr<<a; }
// void _print(long long a ){ cerr<<a; }
void _print(bool a ){ cerr<<a; }  
void _print(char a ){ cerr<<a; }

template<class T> void _print(vector<T> v1){ cerr<<"[ "; for(T i:v1){_print(i);cerr<<" ";}cerr<<"]";}
template<class T> void _print(set<T> s1){cerr<<"[ ";for(T i:s1){_print(i);cerr<<" ";}cerr<<"]";}

void debug_gen()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    #endif
}

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}



void display(int a[],int n)
{
   for(int i =0; i<n; i++)
   {
      cout<<a[i]<<" ";
   }
}

void swap(int a, int b)
{
   int temp = a;
   a=b;
   b = temp;
}

void printpair(vector<pair<ll,ll>> &v)
{
   for(int i=0; i<v.size(); ++i)
   {
      cout<<v[i].first<<" "<<v[i].second<<endl;
   }
   cout<<endl;


}
void printv(vector<int> &v)
{
   for(int i=0;i<v.size(); ++i)
   {
      cout<<v[i]<<" ";
   }
   cout<<nline;
   // cout<<"hello world"
}





void solve()
{   
 int n;
 cin>>n;
 string s;
 cin>>s;
 int ans =0;
 bool flag = false;
 for(int i=1; i<n; i++)
 {
   if(s[i]!=s[i-1])
   {
      if(flag == false && s[i] =='0')
      {
      flag = true;
      ans++;
      } 
      else if(flag)
   {
      ans++;
   }
     
   }
  
 }
 cout<<ans<<nline;


}

// int main() 

signed main()
{
   debug_gen();

   fast_io;
   init_code();
   ll tt;
   cin>>tt; 
   while(tt--)
   {
      solve();
     
   } 
  

    // solve();

    // int a =10;
    // int b=20;
    // a++;
    // string s ="ajeet";
    // vector<int> v1={1,2,3};
    // debug(v1); 
    // vector<string> vs ={"ajeet ", "gupta"};
    // debug(vs);
    // debug(a);
    // debug(b);
    // set<int> s2;
    // s2.insert(20000);
    // s2.insert(88888);
    // debug(s2);
}
