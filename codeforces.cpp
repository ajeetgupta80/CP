
// -------------------------------------ajeet gupta ----------------     ---        
#include<iostream>
#include<cmath>
// #include<bits/stdc++.h>
// #include<bits/stdc++.h> 
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
// #include<unordered_set>
// #include<cstring>
#include<map>
#include<stack>
// #include<queue>


#define sl                s.length()
#define ll                long long
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


using namespace std;

// typedef vector<int> v;
// typedef long long ll;


// string sj(string &s)
// {
// 	int count =0;
//      for(int i=0; i<s.length()-1; i++)
//      {
//      	if(s[i]==s[i+1])
//      	{
//      		count++;
//      		if(count ==6 )
//      		{
//      			return "YES";
//      			break;
//      		}
//      	}
//      	else
//      	{
//      		count =0;
//      	}
//      }
//      return "NO";

// }





void init_code(){
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

void solve(){


}
 
int main() {
   fast_io;
   init_code();
   int tt;
   cin>>tt;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             while(tt--)
   {
   	int a,b,c;
   	cin>>a>>b>>c;
   	int time1 = a-1;
   	int time2= 0;
   	if(b>c)
   	{
   		time2 = b-1;

   	}
   	else
   	{
   		time2= abs(c-b)+c-1;
   	}
   	if(time1<time2)
   	{
   		cout<<1<<endl;
   	}
   	else if(time1>time2)
   	{
   		cout<<2<<endl;
   	}
   	else
   	{
   		cout<<3<<endl;
   	}
    
   }
   return 0;
}
