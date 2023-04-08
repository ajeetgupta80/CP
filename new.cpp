#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;



int dp[200][1000008];
int dyna(vector<int> &coins, int amount,int ind){
     if(amount == 0)
         return 1;
     if(ind<0)
        return 0;

     if(dp[ind][amount]!=-1)
        return dp[ind][amount];
      

     int ways = 0;
     for(int count_amount = 0; count_amount<=amount; count_amount+=coins[ind]){
         ways+=dyna(coins, amount- count_amount, ind-1);
     }
     dp[ind][amount] = ways;
     return dp[ind][amount]%=M;

    
}





signed main()
{

	int n,x;
	cin >> n >>x;
	vector<int> coins(n);
	memset(dp, -1, sizeof(dp));
	for(int i =0; i<n; ++i)
		cin >> coins[i];
	int k = dyna(coins, x , n-1);
	cout<<k<<endl;
    




}