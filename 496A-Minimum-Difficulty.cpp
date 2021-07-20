#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
// #define pb push_back;
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//  Codeforces Round #283 (Div. 2), problem: A.Minimum Difficulty
int main()
{
 
 int n=0;
  cin>>n;
 vector<int> v(n);
 
 for(int i=0;i<n;i++)
 {
     cin>>v[i];
 }
 
int mx=INT_MIN,mn=INT_MAX;

     for(int i=0;i<n-1;i++)
     {
         mx=max(mx,(v[i+1]-v[i]));
     }
     
     
    for(int i=0 ;i<n-2; i++)
     {
         mn=min(mn,v[i+2]-v[i]);
     }
     
  cout<<max(mx,mn);

 
 
}
