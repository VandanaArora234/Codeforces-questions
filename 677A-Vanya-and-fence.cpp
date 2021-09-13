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
 

 // Codeforces Round #355 (Div. 2): A. Vanya and Fence

int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
  ll int n,h,ans=0;
  cin>>n>>h;
  
  for(int i = 0;i<n;i++)
  {
      int t;
      cin>>t;
      
      if(t>h)
      ans+=2;
      
      else
      ans+=1;
  }
  
    cout<<ans;
}