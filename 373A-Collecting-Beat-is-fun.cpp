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
 
 
 
//Codeforces Round #219 (Div. 2), problem: A. Collecting Beats is Fun
 
int main()
 
{
int k=0;
cin>>k;
k*=2;
map<char, int> m;
 
for(int i=0;i<16;i++)
{
    char t1;
    cin>>t1;
    if(t1=='.')
    continue;
    
    m[t1]++;
}
int f=0;
for(auto i: m){
    if(i.second>k)
    {
        f=1;break;
    }
}
 
if(f==1)
cout<<"NO";
 
else
cout<<"YES";
 
 
}