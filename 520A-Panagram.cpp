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
 
 
 
// Codeforces Round #112 (Div. 2), problem: A. PizzaForces
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
 
 int n;cin>>n;
string s;
cin>>s;
transform(s.begin(), s.end(), s.begin(), ::tolower);

map<char,int> m;

for(int i=0;i<n;i++)
{
    m[s[i]]++;
}

 if(m.size()==26)
 cout<<"YES";
 
 else
 cout<<"NO";
}