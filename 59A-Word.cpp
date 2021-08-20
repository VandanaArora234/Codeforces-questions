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
 
 
 
//  Codeforces Beta Round #55 (Div. 2), problem: A. Word
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
   string s;
 cin>>s;
 int cnt=0;
 
 for(int i=0;i<s.size();i++)
 {
     if(s[i]>='A'&&s[i]<='Z')
     cnt++;
 }
 
 if(cnt>s.size()-cnt)
 transform(s.begin(),s.end(),s.begin(),::toupper);
 
 else
  transform(s.begin(),s.end(),s.begin(),::tolower);
 
 cout<<s;
}