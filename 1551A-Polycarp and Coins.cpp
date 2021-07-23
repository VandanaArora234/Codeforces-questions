#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;
 
 
//Codeforces Round #734 (Div. 3), problem: A. Polycarp and Coins
int main()
 
{
    int t=0;cin>>t;
 while(t--)
 {
     ll int n;cin>>n;
     ll int c1=0,c2=0;
     
     
    if(n%3==0)
     {
         c1=n/3;c2=c1;
     }
     
     else{
         c1=n/3;
         c2=n/3+1;
     }
    
    if(c1+c2*2==n)
    cout<<c1<<" "<<c2<<endl;
    
     else
    cout<<c2<<" "<<c1<<endl;
     
  
 }
 
 
}