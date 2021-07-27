#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <cmath>
#include <algorithm>
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;
 
 
// Codeforces Beta Round #67 (Div. 2), problem: A. Life Without Zeros
 
 
int main()
 
{
string a,b;
cin>>a>>b;
string ans = std::to_string(std::stoi(a) + std::stoi(b));
 
 
string aClone="", bClone="",ansClone="";
 
for(int i=0;i<a.length();i++)
{
    if(a[i]=='0'){
    continue;
    }
    
    else
    aClone+=a[i];
}
for(int j=0;j<b.length();j++)
{
    if(b[j]=='0')
     continue;
    
     else
    bClone+=b[j];
 
}
for(int j=0;j<ans.length();j++)
{
    if(ans[j]=='0')
     continue;
    
    else
    ansClone+=ans[j];
 
}
 
int a1=stoi(aClone);
int b1=stoi(bClone);
int ans1=stoi(ansClone);
 
if(a1+b1==ans1)
{
    cout<<"YES"<<endl;
}
 
else
cout<<"NO"<<endl;
 
 
 
}
