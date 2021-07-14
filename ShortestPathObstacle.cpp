#include<stdio.h>
#include<conio.h> 
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <bits/stdc++.h> 
 
using namespace std;
 
 //Codeforces Round #731 (Div. 3), problem: (A) Shortest Path with Obstacle
int main()
{
    int t=0;
    cin>>t;
    
    while(t--){
        int a1,a2,b1,b2,f1,f2;
        
        cin>>a1>>a2;
        cin>>b1>>b2;
        cin>>f1>>f2;
        int ans;
         ans=abs(a1-b1)+abs(a2-b2);
if(((a1==b1&&b1==f1)&&((f2>a2&&f2<b2)||(f2<a2&&f2>b2)))||((a2==b2&&b2==f2)&&((f1>a1&&f1<b1)||(f1<a1&&f1>b1))))
        {
            ans+=2;
        }
        cout<<ans<<endl;
    }


 
}