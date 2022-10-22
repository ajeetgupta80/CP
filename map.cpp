#include"iostream"
#include<map>
#include<bits/stdc++.h>



using namespace std;
void init_code(){
   
    #ifndef ONLINE_JUDGE
    freopen("map.txt", "r", stdin);
    freopen("mapoutput.txt", "w", stdout);
    #endif 
}

void printv(vector<int> &n)
{
	for(int i=0; i<n.size(); ++i)
	{
		cout<<n[i]<<" ";
	}
}

void printpair(vector<pair<int,int>> &v)
{
	for(int i=0; i<v.size(); ++i)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	cout<<endl;

}


int main()
{
	init_code();


    pair<int,string> p;
    // p = {1,"ajeet"};
    p = make_pair(3,"sandeep");
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> &p1 =p;
    p1.first =2;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;

    int a[]={1,2,3};
    int b[]={4,5,6};
     
     pair<int,int> array_p[3];
     array_p[0]={1,4};
     array_p[1]={2,5};
     array_p[2]={3,6};
     for(int i=0;i<3; i++)
     {
     	cout<<array_p[i].first<<" "<<array_p[i].second<<endl;
     }
     cout<<endl;
     swap(array_p[0],array_p[1]);
       for(int i=0;i<3; i++)
     {
     	cout<<array_p[i].first<<" "<<array_p[i].second<<endl;
     }




      
     int n=5;
     vector<int> v;
     for(int i=0; i<n; i++)
     {
     	v.push_back(i);
     }
     vector<int> vk(10,4);
     vk.push_back(7);
     printv(vk);
     cout<<endl;
     vector<int> &v_copy = v;
     v_copy.push_back(9);
     printv(v_copy);
     cout<<endl;

     printv(v);
     cout<<endl;

     vector<pair<int, int>> v_pair ={{1,2}, {2,3}, {3,4}};
     printpair(v_pair);

     int N;
     cin>>N;
     vector<int> varr[N];
     for(int i=0; i<N; ++i)
     {
     	int x;
     	cin >>x;
     	for(int j =0; j<x; ++j)
     	{
     		int u;
     		cin>>u;
     		varr[i].push_back(u);
     	}
     }
     for(int i=0; i<N; ++i)
     {
     	printv(varr[i]);
     	cout<<endl;
     }
     cout<<endl;

     vector<int> v_r;

     for(int i=1; i<7; ++i)
     v_r.push_back(i);

     // vector<int> ::iterator it;
     // for(it = v_r.begin(); it!=v_r.end(); it++)
     // {
     // 	cout<<(*it)<<" ";
     // }
     // cout<<endl<<"END"<<endl;

     vector<pair<int,int>> v_pr={{1,2},{3,4},{5,6}};
     vector<pair<int, int>> :: iterator it;
     for(it = v_pr.begin(); it!=v_pr.end(); it++)
     {
     	cout<<(it->first)<<" "<<(it->second)<<endl;
     }
     cout<<"END"<<endl;

     for(pair<int,int> value : v_pr)
     {
     	cout<<value.first<<" "<<value.second<<endl;
     }



















	// map<int, string> mp;
	// mp[2] = "ajeet";
	// mp[2] = "sandeep";
	// mp.insert({3, "gupta"});
	// map<int, string> :: iterator it;
	// for(it = mp.begin(); it!=mp.end(); ++it)
	// {
	// 	cout<<(*it).first<<endl;
	// }
	// cout<<mp[2];


}