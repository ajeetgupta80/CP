// number theory practise and some of the algorithms of number theory --------      
#include<iostream>
#include<cmath>
// #include<bits/stdc++.h>
using namespace std;

// finding gcd using long division menthod using RECURSION
int GCD(int a, int b)
{
   if(b==0)    
   {
      return a;
   }
   return GCD(b, a%b);
}

// euclid algorithm 
int LCM(int a, int b,int n)
{   int l = (a*b)/n;
   return l; }

// for finding minimum factors
// like 12/18 => 2/3   
void minfactor(int a, int b, int GCCD)
{
   int i = a/GCCD;
   int j = b/GCCD;
   cout<<i<<"/"<<j<<endl;
}



void init_code(){
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int powoftwo(int n)
{
   return (1<<n);
}

int main() 
{
  // init_code();
  // int n= GCD(12,18);
  // int k= LCM(12,18,n);
  // minfactor(12,18,n);
  // cout<<n<<endl;
  // cout<<k<<endl;
   int m = powoftwo(2);
   cout<<m<<endl;




 
   return 0;
} 
     
