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
 
 
 
// Codeforces Round #494 (Div. 3), problem: A. Polycarp's Pockets
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    
    
    ll int n=0;
  
    cin>>n;
    
    int mx=0;
    
   unordered_map<int,int>v; 
   
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        
        v[t]++;
        
        mx= max(mx,v[t]);
    }
    
    cout<<mx;
    
    
}