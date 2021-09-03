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
 

 // Codeforces Round #FF (Div. 2): B. DZY Loves Strings

int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    string s;
    ll int t;
    vector<int> v(26);
    
    cin>>s;
    cin>>t;
    int mx=INT_MIN;
    for(int i=0;i<26;i++)
    {
        cin>>v[i];
        mx=max(v[i],mx);
    }
    int sum=0;
 for(int i=0;i<s.size();i++)
 {
     sum+=((i+1)*v[(s[i]-'a')]);
 }
 

 
 for(int i=s.size();i<t+s.size();i++)
 {
     sum+= ((i+1)*(mx));
 }
    cout<<sum;
}