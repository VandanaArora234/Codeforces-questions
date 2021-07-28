#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <cmath>
#include <algorithm>
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


// Codeforces Beta Round #42 (Div. 2), problem: A. Football


int main()

{

int n=0;
cin>>n;
unordered_map<string,int>v;

for(int i=0;i<n;i++)
{
    string t1;
   
    cin>>t1;
    v[t1]++;
}
string team;
int mx=0;
for(auto i: v)
{
    if(mx<i.second)
    {
        mx=i.second;
        team=i.first;
    }
}
cout<<team;
}