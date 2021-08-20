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
 
 
 
// Codeforces Round #163 (Div. 2), problem: B. Queue at the School
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
   
   
   int n,t;
   cin>>n>>t;
   string s;
   cin>>s;
   int i=0;
   while(t--)
   { 
       i=0;
     while(i<n)
     {
         if(s[i]=='B'&&s[i+1]=='G')
         {
             s[i]='G';
             s[i+1]='B';
             i+=2;
         }
         
         else
         i++;
     }
   }
   
   cout<<s;
 
}