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
 
 
 //  Codeforces Round #352 (Div. 2): A. Summer Camp
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    long long ans,n,pos,num,cnt,i;
    while(cin>>n)
    {
        cnt=0;
        for(i=1;;i++)
        {
            if(i>99)
                cnt+=3;
            else if(i>9)
                cnt+=2;
            else
                cnt++;
            if(cnt>=n)
            {
                num=i;
                break;
            }
        }
        if(cnt==n)
            ans=num%10;
        else
        {
            pos=cnt-n;
            if(pos==1)
                ans=(num/10)%10;
            else
                ans=(num/100)%10;
        }
        cout<<ans<<endl;
    }
    return 0;
 
}