#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//Codeforces Round #160 (Div. 2), problem: A. Roma and Lucky Numbers
int main()
{
 
int n,k;cin>>n>>k;
string s;
int cnt=0;

while(n--)
{
    cin>>s;
      int t=0;
    for(int j=0;j<s.length();j++)
    {
         if(s[j]=='4'||s[j]=='7')
        t++;
    }
 if(t<=k)
    cnt++;
}

cout<<cnt;
}

