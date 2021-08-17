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
 
 
 
// Codeforces Round #118 (Div. 2), problem: A. Comparing Strings
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
 
string s,t;
cin>>s>>t;

if(s.size()!=t.size())
{
    cout<<"NO";
    return 0;
}

map<int,int> m1, m2;

int cnt=0;
for(int i=0;i<s.size();i++)
{
    m1[s[i]]++;
    m2[t[i]]++;
    
    if(s[i]!=t[i])
    {
        cnt++;
    }
    
}

int f=0;

for(int i=0;i<t.size();i++)
{
    if(!m1[t[i]])
    {
        f=1;break;
    }
}

if(cnt!=2||f==1)
cout<<"NO";

else
cout<<"YES";


}