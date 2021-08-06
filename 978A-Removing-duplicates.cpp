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
 
 
 
// Codeforces Round #481 (Div. 3), problem: A. Remove Duplicates
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
ll int n=0;
cin>>n;
vector<int> v(n);
map<int,int>m;

for(int i=0;i<n;i++)
{
    cin>>v[i];
    m[v[i]]++;
}

cout<<m.size()<<endl;

for(int i=0;i<n;i++)
{
    
    if(m[v[i]]==1)
    {
        cout<<v[i]<<" ";
       
    }
    
         m[v[i]]--;
    
    
}



}