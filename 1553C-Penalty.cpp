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



//Harbour.Space Scholarship Contest 2021-2022 (open for everyone, rated, Div. 1 + Div. 2), problem: C. Penalty


ll int moves(string s, int team)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='?') 
        {
            if(i%2==team%2)
            s[i]='0';
            
            
            else
            s[i]='1';
        }
    }
    
    ll int t1=5,t2=5, s1=0,s2=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0)
        {
            if(s[i]=='1')
            s1++;
            
            t1--;
        }
        
        else{
            if(s[i]=='1')
            s2++;
            
            t2--;
        }
        
        if(s1>s2+t2||s2>s1+t1)
       return i+1;
    }
    return 10;
}

int main()

{
    
ll int t=0;
cin>>t;

while(t--)
{
    string s;
    cin>>s;
    
    cout<<min(moves(s,1), moves(s,2))<<endl; //take two cases, one in which A wins and a second in which B wins and return the minimum
}

}

