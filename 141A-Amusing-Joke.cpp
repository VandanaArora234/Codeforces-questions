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
 

 // Codeforces Round #101 (Div. 2): A. Amusing Joke
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      
     string a,b,c;
     cin>>a>>b>>c;
     
     string ans=a+b;
     sort(ans.begin(),ans.end());
     sort(c.begin(),c.end());
     
     if(ans==c)
     cout<<"YES";
     
     else
     cout<<"NO";

}