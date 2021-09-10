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
 

 // Codeforces Round #405 (rated, Div. 2, based on VK Cup 2017 Round 1): A. Bear and Big Brother

int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    ll int x,y;
    cin>>x>>y;
    int cnt = 0;
   
   while(x<=y)
   {
       if(x<=y)
       {
           x*=3;
           y*=2;
           cnt++;
       }
       
       if(x>y)
       break;
   }
   cout<<cnt;
   
    
}