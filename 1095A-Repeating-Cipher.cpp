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
 
 
 
// Codeforces Round #529 (Div. 3), problem: A. Repeating Cipher
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
  int n;
  string s;
  cin>>n>>s;
  string ans = "";
  int k=1;
  
  for(int i=0;i<s.size();i+=k)
  {
      ans+=s[i];
      k++;
  }
    cout<<ans;
    
}