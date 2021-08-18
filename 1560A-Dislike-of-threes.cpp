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
 
 
 
 
 
 // Codeforces Round #739 (Div. 2), problem: A. Dislike of Threes
 
int main()
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      
      
    vector<int>v;
    ll int i=1,cnt=0;
for(int i=1;i<9950;i++)
    {
     
        if(i%3==0)
       continue;
        
        else if(i%10==3)
        continue;
        
        else{
             v.push_back(i);
      
        }
     
      
    }
    
    int t;cin>>t;
    
while(t--)
{
    int q;cin>>q;
   
    cout<<v[q-1]<<endl;
    
}
 
 
}