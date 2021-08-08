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
 
 
 
// Codeforces Round #486 (Div. 3), problem: A. Diverse Team
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    
    
    ll int n=0,k=0;
    cin>>n>>k;
    
    vector<int> v(n);
    unordered_map<int,int> m;
    
    for(int i=0;i<n;i++)
    {
    
        cin>>v[i];
        m[v[i]]=i+1;
    }
    
    if(m.size()<k)
    cout<<"NO";
    
    else{
        cout<<"YES"<<'\n';
        int j=0;
        for(auto i: m)
        {
            cout<<i.second<<" ";
            j++;
            
            if(j==k)
            break;
        }
    }
    
    
   
}