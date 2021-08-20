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
 
 
 
//  Codeforces Beta Round #32 (Div. 2, Codeforces format), problem: B. Borze
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
   
 string s;cin>>s;
 string ans;
 for(int i=0;i<s.size();i++)
 {
     if(s[i]=='-'&&s[i+1]=='-')
     {
         ans+='2';i++;
     }
     
     
     else if(s[i]=='-'&&s[i+1]=='.')
     {
         ans+='1';i++;
     }
     
     else
     ans+='0';
 }
 cout<<ans;
 
}