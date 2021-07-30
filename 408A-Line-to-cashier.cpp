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



//Codeforces Round #239 (Div. 2), problem: A. Line to Cashier



int main()

{
    ll int n;
    cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int sum=1, ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<v[i];j++)
        {
            int temp;
            cin>>temp;
            
            sum+=(temp*5);
        }
        sum+=(15*v[i]);
        ans=min(ans,sum);
    }
cout<<ans<<endl;
}

