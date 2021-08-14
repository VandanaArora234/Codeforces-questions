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
 
 
 
// Codeforces Round #386 (Div. 2), problem: A. Compote
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      
  int a,b,c;
  cin>>a>>b>>c;
  
 int ans=0;
 
 for(int i=1;i<=a;i++)
 {
     if((b>=i*2)&&(c>=i*4))
     {
         ans=i+(i*2)+(i*4);
     }
     else break;
     
 }
    cout<<ans;
}