#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//Codeforces Round #108 (Div. 2), problem: A. Marks
int main()

{
 
int n,m;
cin>>n>>m; 
vector<string> v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
vector <bool> success(n,false);

for(int i=0;i<m;i++)
{
 
    char cor='0';
for(int j=0;j<n;j++)
{
    
    if(v[j][i]>cor)
    cor=v[j][i];
}

for(int j=0;j<n;j++)
{
    if(cor==v[j][i])
    {
    success[j]=true;
      
    }
}


}

cout<<count(success.begin(),success.end(),true);

}

