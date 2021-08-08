#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <cmath>
#include <algorithm>
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
#define f1 ios_base::sync_with_stdio(false);
#define f2 cin.tie(NULL);
using namespace std;
 
 
 
// Codeforces Round #496 (Div. 3), problem: A. Tanya and Stairways
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    
    
    ll int n=0;
  
    cin>>n;
    
   vector<int>v(n); 
   vector<int> p;
   
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        
       
        
        if(v[i]==1&&i!=0)
        p.push_back(v[i-1]);
        
         if(i==n-1)
        p.push_back(v[i]);
       
    }
    
    int si=p.size();
    
    cout<<si<<'\n';
    
    for(int i=0;i<si;i++)
    {
        cout<<p[i]<<" ";
    }
    
    
    
}