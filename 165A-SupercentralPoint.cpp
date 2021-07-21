#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;
 
 
//Codeforces Round #112 (Div. 2), problem: (A) Supercentral Point
int main()
{
 
int n;cin>>n;
 
vector<pair<int,int>>v;
 
for(int i=0;i<n;i++)
{
    int a,b;
    cin>>a>>b;
    v.push_back(make_pair(a,b));
}
 
int cnt=0;
  
for(int i=0;i<n;i++)
{
  int x1=0,y1=0,x2=0,y2=0;
    for(int j=0;j<n;j++)
    {
        if(v[i].first==v[j].first&&j!=i)
        {
          if(v[i].second>v[j].second)
          {
              y1=1;
          }
          else if(v[i].second<v[j].second)
          {
            y2=1;  
          }
        }
        
        if(v[i].second==v[j].second&&j!=i)
        {
            if(v[i].first>v[j].first)
          {
              x1=1;
          }
          else if(v[i].first<v[j].first)
          {
            x2=1;  
          }
        }
        if(y1>0 && y2>0 && x2>0 && x1>0)
        {
            cnt++;break;
        }
 
        }
    }
    cout<<cnt;
    
}