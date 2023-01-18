
// facebook -------
void solve(){  
   
    int num;
    cin >>num;
    int ajeet[num+2];
    int abhay[num+2];
    for(int i=1; i<=num; ++i )
    cin >> ajeet[i];
    for(int i=1; i<=num; ++i )
    cin >> abhay[i];
    
    int max = 0;
    int max_ind =0;
    for(int i =1; i<=num; ++i)
    {
        if(ajeet[i]>max )
        {
            max = ajeet[i];
            max_ind = i;
        }else if(ajeet[i]==max )
        {
            if(abhay[i]>abhay[max_ind]){
                max = ajeet[i];
                max_ind = i;
            }
        }
    }
    cout<<max_ind<<endl;
 
}




// lcm hates gcd -------
void solve(){  
   
   int a, b;
   cin>>a>>b;
    int c = __gcd(a,b);
    cout<<lcm(a,c)-__gcd(b,c)<<endl;
}