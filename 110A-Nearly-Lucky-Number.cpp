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
 
 
 
// Codeforces Beta Round #84 (Div. 2 Only), problem: A. Nearly Lucky Number
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      
      string s;cin>>s;
      int cnt=0;
      for(int i=0;i<s.size();i++)
      {
          if(s[i]=='4'||s[i]=='7')
          cnt++;
          
      }
 
 if(cnt==4||cnt==7)
 cout<<"YES";
 
 else
 cout<<"NO";
 
}