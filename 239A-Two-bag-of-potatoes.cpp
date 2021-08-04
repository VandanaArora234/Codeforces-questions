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
 
 
 
// Codeforces Round #148 (Div. 2), problem: A. Two Bags of Potatoes
 
 
 
int main()
 
{
ll int n,k,y;
 
cin>>y>>k>>n;
 if(y>=n){
     cout<<-1<<endl;
     return 0;
 }
 
ll int x=k-y%k;      

if(x+y>n){
cout<<-1<<endl;
return 0;}

    for(;x<=n-y;x=x+k)
    {
         cout<<x<<" ";
    }
    

}