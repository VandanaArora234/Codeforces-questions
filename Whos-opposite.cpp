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
 
 
 
 
 // Codeforces Round #739 (Div. 2), problem: B. Who's Opposite
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      
 
    
   ll int t;cin>>t;
    
while(t--)
{
    
   ll int a,b,c;
    cin>>a>>b>>c;
    
  
    ll int si=(abs(b-a)*2), ans=-1;  
 
    if(c>si||b>si||a>si||abs(b-a)==1)
    {
          cout<<-1<<endl;
    }
  
 
    else
    {
      ll int diff=abs(b-a);
        ans=(diff+c);
        ans%=si;
        
         if(ans==0)
             ans=si;
             
    
            
                
          cout<<ans<<endl;
    }
    
  
    
    
}
 
 
}