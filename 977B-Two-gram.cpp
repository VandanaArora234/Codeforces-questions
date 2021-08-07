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
 
 
 
// Codeforces Round #479 (Div. 3), problem: B. Two-gram
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    
    
    ll int n=0;
    string s;
    cin>>n>>s;
    
    map<string,int> v;
    int maxi=0;
    string ans="";
    for(int i=0;i<n;i++)
    {
        string t=s.substr(i,2);
        v[t]++;
        
        if(v[t]>maxi)
        {
            maxi=v[t];
            ans=t;
            
        }
        
    }
    cout<<ans;
    
}