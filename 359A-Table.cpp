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
 
 
 
// Codeforces Round #209 (Div. 2), problem: A. Table
 
 
 
int main()
 
{
int n,m;

cin>>n>>m;

int ar[n][m];
int row=0,col=0;
int cnt=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>ar[i][j];
        
        if((ar[i][j]==1)&&(i==0||j==0||i==n-1||j==m-1))
        {
            row=i;col=j;
            cnt++;
        }
        else if(ar[i][j]==1&&cnt==0){
            row=i;col=j;
        }
    }
}

if(row==0||row==n-1||col==0||col==m-1)
cout<<2;

else
cout<<4;


}