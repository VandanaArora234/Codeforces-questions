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
 
 
 
// Codeforces Beta Round #34 (Div. 2), problem: A. Reconnaissance 2
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    
    
    ll int n=0;
  
    cin>>n;
    
   vector<int>v(n); 
   int mn=INT_MAX;
   int idx1=0,idx2=0;
   
   cin>>v[0];
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        
     
         if(abs(v[i%n]-v[(i-1)%n])<mn)
        {
            mn=abs(v[i%n]-v[(i-1)%n]);
            idx1=i;
            
            if(i==n)
            idx2=1;
            
            else
            idx2=i+1;
            
            
        }
    }
    
    cout<<idx1<<" "<<idx2;

    
    
    
}