
// -------------------------------------ajeet gupta -------------------------------------------   
// hashing is an array in which we store number time a index element appear and we increase the count

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];



int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++)
   {
      cin>>a[i];
      hsh[a[i]]++;
   }
   
}

 
