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
 

 // Codeforces Round #652 (Div. 2): A. FashionabLee

int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
   ll int t;
   cin>>t;
   
   while(t--)
   {
       ll int n;
       cin>>n;
       
       if(n%4 == 0)
       cout<<"Yes"<<endl;
       
       else
       cout<<"No"<<endl;
   }
    
}