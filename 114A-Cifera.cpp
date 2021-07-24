#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;
 
 
//Codeforces Round #86 (Div. 2), problem: A. Cifera
int main()
 
{
    ll int k;
    double l;
    cin>>k>>l;
  
  
  int ans=1;
    int f=0;
    int p=0;
   while(l!=0)
    {
     
     l/=k;p++;
     
     if(l==1)
     {
        break;
     }
    
       
    }
  if(l==1)
  {
      cout<<"YES"<<endl<<p-1;
  }
  
  else
  cout<<"NO";
}