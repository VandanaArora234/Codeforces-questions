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
 
 
 
// Codeforces Round #102 (Div. 2), problem: A. System of Equations
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
  int n,m;
  int cnt=0;
  cin>>n>>m;
  int a=0,b=0;
  for(int i=0;i*i<=n;i++)
  {
      a=i;
      b= n-(a*a);
      
      if(a+(b*b)==m)
      {
          cnt++;
      }
      
  }
  
  cout<<cnt;
  
    
    
}