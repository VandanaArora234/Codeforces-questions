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



//Codeforces Round #211 (Div. 2), problem: A. Soroban

int main()

{
ll int k=0;
cin>>k;
if(k==0){
 cout<<"O-|-OOOO"<<endl;return 0;}
ll int n=k;
while(n)
{
    int tp=n%10;
    
    if(tp==0)
    {
        cout<<"O-|-OOOO"<<endl;
    }
     else if(tp==1)
    {
        cout<<"O-|O-OOO"<<endl;
    }
     else if(tp==2)
    {
        cout<<"O-|OO-OO"<<endl;
    }
    else if(tp==3)
    {
        cout<<"O-|OOO-O"<<endl;
    }
     else if(tp==4)
    {
        cout<<"O-|OOOO-"<<endl;
    }
         else if(tp==5)
    {
        cout<<"-O|-OOOO"<<endl;
    }
         else if(tp==6)
    {
        cout<<"-O|O-OOO"<<endl;
    }
         else if(tp==7)
    {
        cout<<"-O|OO-OO"<<endl;
    }
           else if(tp==8)
    {
        cout<<"-O|OOO-O"<<endl;
    }
           else if(tp==9)
    {
        cout<<"-O|OOOO-"<<endl;
    }
    
    
    
    
    
    n/=10;
}


}

