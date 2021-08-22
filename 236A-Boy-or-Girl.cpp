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
 
 
 
//  Codeforces Round #146 (Div. 2): A. Boy or Girl
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      
      string s;cin>>s;
      map<char,int>m;
      
      for(int i=0;i<s.size();i++)
      {
          m[s[i]]++;
      }
      
      if(m.size()%2==0)
      cout<<"CHAT WITH HER!";
      
      else
      cout<<"IGNORE HIM!";

}