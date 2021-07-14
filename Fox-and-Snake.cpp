#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
using namespace std;

//Codeforces Round #290 (Div. 2), problem: A. Fox And Snake

int main()

{
   int n,m=0;
   cin>>n>>m;
   
   char ar[n][m];
   
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(i==0||i%2==0)
           {
               ar[i][j]='#';
           }
           
           else if(i==1||i%4==1)
           {
    
               if(j!=m-1)
               {
                   ar[i][j]='.';
               }
               else
                ar[i][m-1]='#';
           }
           else
           {
                if(j!=0)
               {
                   ar[i][j]='.';
               }
               else
                ar[i][0]='#';
           }
       }
   }
   
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cout<<ar[i][j];
       }
       cout<<endl;
   }
}   

