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
 

 // Codeforces Round #143 (Div. 2): A. Team
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
      
    int t;
    cin>>t;
    int ans=0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a==1&&b==1||b==1&&c==1||c==1&&a==1)
        {
            ans++;
        }
    }
    
    cout<<ans;

}