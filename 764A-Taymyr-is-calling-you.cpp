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
 

 // Codeforces Round #395 (Div. 2): A. Taymyr is calling you

int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
  ll int n,m,z,cnt = 0;
  cin>>n>>m>>z;


 for(int i=m;i<=z;i+=m)
  for(int j = n;j<=z;j+=n)
   if(i==j)
cnt+=1;
 
 cout<<cnt;
 
}