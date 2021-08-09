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
 
 
 
// Codeforces Beta Round #83 (Div. 2 Only), problem: A. Palindromic Times
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    string s;
    cin>>s;
    
  int time=stoi((s.substr(0,2)+s.substr(3,4)));

    
    vector<int> v(16);
    v.push_back(0);
     int ins=0;
    for(int i=1;i<16;i++)
    {
        
        if(v[i-1]==550||v[i-1]==1551)
        ins=v[i-1]+451;
       
        
        if(v[i-1]<550||v[i-1]>=1001)
        ins = v[i-1] + 110;
        
       if(v[i-1]==550||v[i-1]==1551)
        ins=v[i-1]+451;
        
        v[i]=ins;
    }
  
    int ans=0;
    for(int i=1;i<16;i++)
    {
        if(time>=v[i-1]&&time<v[i]){

            ans=v[i]; break;
        }
        
      
    }
    
    
    string out = "";
    
    if(ans==0)
    {
        out="00:00";
    }
    
    else if(ans>1000){
     out = to_string(ans);
    out.insert(2,":");
    }
    
    else{
        out= to_string(ans);
        out.insert(0,"0");
        out.insert(2,":");
    }
        

    
    cout<<out<<endl;
    
    
    
    
    
}