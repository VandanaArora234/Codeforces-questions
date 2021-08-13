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
 
 
 
// Codeforces Round #392 (Div. 2), problem: A. Holiday Of Equality
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
  int n;
  
  cin>>n;
  vector<int> m(n);
  int mx= INT_MIN;
for(int i=0;i<n;i++)
{
  cin>>m[i];
  mx=max(mx,m[i]);
}
if(m.size()==1)
{
    cout<<0;
    return 0;
}
int sum=0;
for(auto i: m)
{
   sum+=(mx-i);
}
cout<<sum;
    
}