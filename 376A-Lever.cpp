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



// Codeforces Round #221 (Div. 2), problem: A. Lever



int main()

{
  string s;
    cin>>s;
    
    ll int i=0,j=s.size()-1;
    ll int left=0, right=0;
     ll pos=s.find('^');
     
     for(ll int i=0;i<pos;i++)
     {
          if(s[i]!='=')
        {
         int temp= s[i]-'0';
         left+=(pos-i)*(temp);
         
        }
     }
 
    for(ll int j=pos+1;j<s.size();j++)
    {
        
         if(s[j]!='=')
        {
         int temp = s[j]-'0';
         
         right+=(j-pos)*(temp);
      
        }

    }

    
    if(left<right)
    cout<<"right";
    
    else if(right<left)
    cout<<"left";
    
    else
    cout<<"balance";
    
  
}