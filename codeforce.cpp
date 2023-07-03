
// -------------------------------------ajeet gupta ---------------------------------------------
/*
ID: edaj8081
LANG: C++
TASK: Your Ride Is Here
*/
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include <stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<math.h>                                                                                 
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstring>
#include<map>
#include<stack>
#include<set>
#include<queue>
#include <deque>
// #include<ext/pb_ds/assoc_container.hpp>   
// #include<ext/pb_ds/tree_policy.hpp>  

// #define rep(i,n) for (int i = 0; i < (n); ++i)
const long long INF = 1ll << 32;

// for n elements theere are 2^n subsets in mathematics
// for iterator (*it).first == it->first for maps
// A TO Z --> 65 TO 90 ,  a to z --> 97 to 122
#define int               long  long
// #define INF               1e18
#define nline             "\n"
#define sl                s.length()
#define pb                push_back               
#define fr(a,b)           for(int i = a; i < b; i++)
#define rep(i,a,b)        for(int i = a; i < b; i++)
#define mod               1000000007 
// #define mod               1e8+1;
// #define all(x)            (x).begin(), (x).end()
#define prDouble(x)       cout << fixed << setprecision(10) << x
#define triplet           pair<ll,pair<ll,ll>>
#define goog(tno)         cout << "Case #" << tno <<": "
#define fast_io           ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x)           int x; cin >> x
#define show(x)           cout<<x<<endl;
#define all(v)            (v).begin(), (v).end()

const int M = 1e9+7;

/* 
sum upto n = (n*(n+1))/2 
sum upto n-1 = (n*(n-1)/2)  
(a+b)%M = ( (a%M) + (b%M) )% M
(a*b)%M = ( (a%M) * (b%M) )% M
(a-b)%M = ( (a%M) - (b%M) + M)% M  // extra +M for making positve
*/

using namespace std;
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key


typedef long long ll;
typedef unsigned long long ull;
typedef unordered_map<ll, bool> ump;
typedef  priority_queue<int, vector<int>, greater<int> > pq;  // MIN HEAP 


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
template<class T> void _print(set<T> s1){
cerr<<"[ ";for(T i:s1){_print(i);cerr<<"";}cerr<<"]";}

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

void swap(int &a, int &b)
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

// finding gcd using long division menthod using RECURSION
int GCD(int a, int b)
{
   if(b==0)    
   {
      return a;
   }
   return GCD(b, a%b);
}
const int N = 1008;
vector<int> prime(N+1);
vector<bool> isprime(N+1, true);


// void seve()
// {
//     isprime[1] = false;
//     for(int i=2; i<=1000; ++i)
//     {
//         if(isprime[i])
//             {
//                 prime.push_back(i);
//                 for(int j = i*i; j<=N; j+=i)
//                 {
//                     isprime[j] =false;
//                 }

//             }
//     }

// }

int binary_expo(int a , int b, int M)
{
   if(b==0)return 1;
   int c = binary_expo(a,b/2,M);
   if(b%2==0)
   {
      return c*c%M;
   }
   return c*c%M*a%M;
}
 
 int lcm(int a, int b){
  int x = __gcd(a,b);
  return a*b/x;
 }


set <int > s;
bool prime_square[10000];
void sieve(){
   for(int i =2; i<10000; ++i)
   {
      if(!prime_square[i])
      {
         s.insert(i*i);
         for(int j= i*i; j<1000000; j+=i )
         {
            prime_square[j]= true;

         }
      }
   }
   
}
 map<int,int> mp;

void reverseStr(string& str)
{
    int n = str.length();
  
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

// int kadane(vector<int> &v, int start, int end)
// {
//     int sum = 0;
//     int mx = -1e18;
//     for(int i =start; i<end; ++i)
//     {
//        sum+=v[i];
//        if(v[i]>sum)
//        {
//          sum = v[i];
//        }
//        mx = max(mx,sum);
//     }
//     return mx;
// }

/*
 imp observation for binary search on answer 
  1 where we have to minimize the maximum or vice versa
  2 figure out the range 
  3 TTTTTT|FFFFF
  4 range dont matter you can take l = 0 as well as r = 2e9 coz its only 
    taking log2(2e9) = 60 iterations
    
*/

 // for(int i =0; i<8; ++i)
 //  {
 //    if(st.substr(i,k)==s)   find substring using this in contest
 //    {
 //      flag =1;
 //      break;

 //    }
 //  }


// int required;
// void dfs(vector<int>&v, int ind, int sum)
// { 
//    if(ind == v.size())
//      {
//        if(sum == required){
//           cout<<"found"<<endl; 
//        }
//             return;
//      }
//    dfs(v,ind+1,sum+v[ind]);
//    dfs(v,ind+1,sum);
// }
string printbinary(int n)
{
     return bitset<8>(n).to_string();
}




// int dp[100];
// int enter = 0;
// int solve(int n)
// {   
//     enter++;
    
//     if(n<2)
//         return 1;

//     if(dp[n]!=-1)
//         return dp[n];

//     dp[n] = solve(n-1)+solve(n-2);
//     return dp[n];

  
// }


void ways(vector<vector<int>> &ans, vector<int> &a, int b, int ind,vector<int> &ds)
{  
        if(b<0) return;
        if(ind>=a.size()) return;
        if(b==0)
        {
            sort(ds.begin(),ds.end());
            ans.push_back(ds);
            return;
        }
    
        for(int i = ind; i<a.size(); ++i)
        {
            ds.push_back(a[i]);
            
            ways(ans,a,b-a[i],i,ds);
            ds.pop_back();
        }
        
}
  
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i =0;i<n; ++i)
        cin >> v[i];
    vector<int> ans(n);
    reverse(v.begin(), v.end());
    for(int i =0; i<n; ++i)
    {
        int fake = 0;
        for(int j = i+1; j<n; ++j)
        {
            if(v[i]<v[j]){
                fake++;
            }
        }
        ans.push_back(fake);
    }
    reverse(ans.begin(), ans.end());
    for(int i =0; i<n; ++i)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
      
        

}


 
// int main() 
 signed main()
{
    ofstream fout ("test.out");
    ifstream fin ("test.in");
   // TOTAL SUBARRAY OF N DISTINCT ELEMENT IS (N*(N+1)/2)
   debug_gen();
   fast_io;
   init_code(); 
   // seve();
   // int tt;
   // cin>>tt; 
   // while(tt--)
   // {             
    
   //     solve();
   
   // }
   //  memset(dp,-1,sizeof(dp));
   // int ans = solve(7);
   // cout<<ans<<endl;
   // cout<<enter<<endl;

  // solve();
   // int n;
   // cin >> n;
   // vector<int> A(n);
   // for(int i=0; i<n; ++i)
   //   cin >> A[i];
   // int B;
   // cin >> B;
       
   //      vector<vector<int> > ans;
   //      vector<int> ds;
   //      sort(A.begin(),A.end());
   //      solve(ans,A,B,0,ds);
   //      for(auto it:ans)
   //      {
   //          for(auto x:it)
   //          {
   //              cout<<x<<" ";
   //          }
   //          cout<<endl;
   //      }
        
      //   for(int i = 0; i<=10; ++i)
      //   {
      //       cout<<printbinary(i)<<endl;
      //   }
      
      // int ans = 6|7;
      // cout<<ans<<endl;
   solve();

   }
