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
 
 
 // Codeforces Round #173 (Div. 2): A. Bit++
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
 
  
    ll t;
    cin >> t;
     int ans=0;
    while(t--)
    {
        string s;
        cin>>s;
    
     for(int i=0;i<s.size();i++)
     {
        if(s[i]=='+')
        {
            ans++;
            break;
        }
        
        else if(s[i]=='-')
        {
            ans--;
            break;
        }
        
     }
     
   }
   cout<<ans;
 
}
