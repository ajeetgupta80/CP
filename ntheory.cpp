void solve(){  
   
   int a, b;
   cin>>a>>b;
    int c = __gcd(a,b);
    cout<<lcm(a,c)-__gcd(b,c)<<endl;
}