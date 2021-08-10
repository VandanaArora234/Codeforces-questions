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
 
 
 
// Codeforces Round #102 (Div. 2), problem: A. Help Vasilisa the Wise 2
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    int r1,r2,c1,c2,d1,d2;
    int a=0,b=0,c=0,d=0,f=0;
 
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    
    for(int i=1;i<=9;i++)
    {
        a=i;
        b=r1-a;
        c=c1-a;
        d=r2-c;
        
        if(a!=b&&b!=c&&c!=d&&a!=d&&a!=c&&b!=d&&a<10&&b>0&&b<10&&c>0&&c<10&&d>0&&d<10)
        {
            
        if(a+b==r1&&c+d==r2&&a+c==c1&&b+d==c2&&a+d==d1&&b+c==d2)
        {
            f=1;
            break;
        }
        }
        
    }
    
    if(f==1)
    cout<<a<<" "<<b<<'\n'<<c<<" "<<d;
    
    else
    cout<<-1;
    
    
}