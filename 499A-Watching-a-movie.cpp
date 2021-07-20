#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;
 
 
//Codeforces Round #284 (Div. 2), problem: A. Watching a movie
int main()
{
 
int n,x;
cin>>n>>x;
int l,r;
int at=1,ans=0;
for(int i=0;i<n;i++)
{
    cin>>l>>r;
    
    while(at+x<=l)
    {
        at+=x;
    }
    ans+=r-at+1;
    at=r+1;
}
cout<<ans;
}