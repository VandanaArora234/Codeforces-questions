#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <cmath>
#include <algorithm>
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;
 
 
// Codeforces Round #179 (Div. 2), problem: A. Yaroslav and Permutations
 
 
int main()
 
{
 
int n=0;
cin>>n;
map<int,int> v;
int cnt=1;
 
for(int i=0;i<n;i++)
{
    int t1;
    cin>>t1;
    v[t1]++;
   
}
int f1=0;
for(auto i: v)
{
    if(i.second!=1){
         f1=1;break;
    }
   
}
 
if(f1==0){
cout<<"YES"<<endl;
return 0;
    
}
 
int f=0;
 
 
for(auto i: v)
{
    if(i.second-1<=n-i.second&&i.second!=1)
    {
           f=1;
    }
 
else if(i.second-1>n-i.second&&i.second!=1){
    f=0;break;
}

    
 
    
}
if(f==1)
cout<<"YES";
 
else
cout<<"NO";
 
}