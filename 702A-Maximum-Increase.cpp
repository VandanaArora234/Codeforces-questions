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
 
 
 //  Educational Codeforces Round 15: A. Maximum Increase
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
ll int n;cin>>n;
vector<int>v(n);
ll int cnt = 1,ans=1;
 
cin>>v[0];
for(int i = 1;i<n;i++)
{
    cin>>v[i];
    
    if(v[i]>v[i-1])
    {
        cnt++;
 
    }
    
    else{
         ans = max(cnt,ans);
        cnt = 1;
    }
}
 
ans = max(cnt,ans);
 
cout<<ans;
 
}