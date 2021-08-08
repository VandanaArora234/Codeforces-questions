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
 
 
 
// Codeforces Round #490 (Div. 3), problem: A. Mishka and Contest
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    
    
    ll int n=0,k=0;
  
    cin>>n>>k;
    
   vector<int>v(n); 
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    
    }
    int i=0, j=n-1;
    
    while(v[i]<=k||v[j]<=k)
    {
        
        if((v[i]>k&&v[j]>k))
        break;
        
        if(v[i]<=k)
        {
            cnt++;i++;
        }
        
      else if(v[j]<=k)
        {
            cnt++;j--;
        }
        
        if(i==j+1)
        break;
        
      
    }
   cout<<cnt;
}