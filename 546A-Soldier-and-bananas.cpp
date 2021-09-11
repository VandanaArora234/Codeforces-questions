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
 

 // Codeforces Round #304 (Div. 2): A. Soldier and Bananas

int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    ll int k,n,w;
    
    cin>>k>>n>>w;
    
  int cst = 0;
  for(int i = 1;i<=w;i++)
  {
      cst+=(i*k);
  }
  if(cst-n<0)
  cout<<0;
  else
  cout<<(cst - n)<<endl;
   
    
}