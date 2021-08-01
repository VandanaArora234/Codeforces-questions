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



// Codeforces Round #206 (Div. 2), problem: A. Vasya and Digital Root



int main()

{
ll int k,d;

cin>>k>>d;

if(k>1&&d==0){
cout<<"No solution";
return 0;
}


string ans=to_string(d);

for(int i=1;i<k;i++)
{
    ans+='0';
}

cout<<ans<<endl;
}
