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
 
 
 
//  Codeforces Round #166 (Div. 2), problem: A. Beautiful Year
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
   
 ll int year;
 cin>>year;

 int ans=year+1;
 
 while(true)
 {
    int a=ans%10,b=(ans/10)%10,c=(ans/100)%10, d=(ans/1000)%10;
    
    if(a!=b&&b!=c&&c!=d&&d!=a&&a!=c&&d!=b)
    {
        break;
    }
    
    else
    ans++;
    
 }
 cout<<ans;
 
 
}