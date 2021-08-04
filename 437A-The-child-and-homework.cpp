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
 
 
 
// Codeforces Round #250 (Div. 2), problem: A. The Child and Homework
 
 
 
int main()
 
{
string a,b,c,d;

cin>>a>>b>>c>>d;

string ans="";
int cnt=0;
int A=a.size()-2 , B=b.size()-2, C=c.size()-2 ,D=d.size()-2;

if((A>=2*B&&A>=2*C&&A>=2*D)||(2*A<=B&&2*A<=C&&2*A<=D))
{
   ans="A";
   cnt++;
}
 if((B>=2*A&&B>=2*C&&B>=2*D)||(2*B<=A&&2*B<=C&&2*B<=D))
{
    ans="B";
    cnt++;
}

 if((D>=2*B&&D>=2*C&&D>=2*A)||(2*D<=B&&2*D<=C&&2*D<=A))
{
     ans="D";
         cnt++;
}

if((C>=2*B&&C>=2*D&&C>=2*A)||(2*C<=B&&2*C<=D&&2*B<=A)){
      ans="C";
          cnt++;
}



if(cnt>1||cnt==0)
cout<<"C";

else
cout<<ans;

}