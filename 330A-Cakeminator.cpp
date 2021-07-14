#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
using namespace std;

//Codeforces Round #192 (Div. 2), problem: A. Cakeminator

int main()

{
   int n,m=0;
   cin>>n>>m;
   int ans=0;
   char ar[n][m];
   
  int r[n]={0},c[m]={0};    //21

   
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             cin>>ar[i][j];
             
             if(ar[i][j]=='S')
             {
                 r[i]=1;c[j]=1;

             }
         }
     }
     
  for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             
             if(r[i]==0||c[j]==0)
             {
                ans++;
             }
         }
     }
   
     if(ans<0)
     cout<<"0";
     
     else
     cout<<ans<<endl;
     
     
   
  
}   

