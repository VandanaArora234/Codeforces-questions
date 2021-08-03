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
 
 
 
// Codeforces Round #479 (Div. 3), problem: A. Wrong Subtraction
 
 
 
int main()
 
{
int k=0;
string s;
 
cin>>s>>k;  
int si=s.size();
for(int i=0;i<k;i++)
{
    if(s[si-1]=='0')
    {
        int temp=stoi(s)/10;
        s=to_string(temp);
        si-=1;
    }
    
    else{
        int temp=stoi(s)-1;
        s=to_string(temp);
    }
}
cout<<s<<endl;


    }