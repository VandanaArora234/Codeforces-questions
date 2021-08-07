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
 
 
 
// Codeforces Round #481 (Div. 3), problem: B. File Name
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    
    
    ll int n=0;
    string s;
    cin>>n>>s;
    ll int cnt=0;
    for(int i=0;i<n-2;i++)
    {
        if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')
        cnt++;
    }
    
    cout<<cnt;
  
}