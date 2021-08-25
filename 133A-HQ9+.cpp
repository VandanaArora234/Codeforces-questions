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
 

 //  Codeforces Beta Round #96 (Div. 2): A. HQ9+
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      
  int f=0;
  string s;
  cin>>s;
  
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='H' ||s[i]=='Q'||s[i]=='9')
      {
          f=1;break;
      }
      
  }
  
  if(f==1)
  cout<<"YES";
  
  else
  cout<<"NO";

}