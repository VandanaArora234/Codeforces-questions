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
 

 // Codeforces Round #162 (Div. 2): B. Roadside Trees (Simplified Edition)

int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
   int n;cin>>n;
   
   int j;cin>>j; 
   int cnt=j+1;
int tp;
   for(int i=1;i<n;i++)
   {
        int t;
       cin>>t;
       
       if(i==1)
       {
           
           cnt+=abs(t-j)+1;
       }
       else
       {
          
           cnt+=abs(t-tp)+1;
       }
       tp=t;
       cnt++;
   }
   cout<<cnt<<endl;
   
   
}