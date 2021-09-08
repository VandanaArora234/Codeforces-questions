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
 
ll solve(ll num) {
    return (num * (num-1))/2;
}

 // Codeforces Round #340 (Div. 2): A. Elephant

int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    ll int x;cin>>x;
    int cnt=x/5;
  
  if(x%5>0)
  cnt++;
  
  cout<<cnt;
    
    
}