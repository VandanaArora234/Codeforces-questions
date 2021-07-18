#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
using namespace std;

 //Codeforces Round #263 (Div. 2), problem: (A) Appleman and Easy Task
  int main()
 
{
    int n=0;
    cin>>n;
    char ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
  int f=1;
  
     for(int i=0;i<n;i++)
    {
        
         int cnt=0;
              
        for(int j=0;j<n;j++)
        {
            
             
          
               if(ar[i][j-1]=='o'&&j-1>=0)
               {
                   cnt++;
               }
     
               if(ar[i][j+1]=='o'&&j+1<n)
               {
                   cnt++;
                  
               }
                 if(ar[i-1][j]=='o'&&i-1>=0)
               {
                   cnt++;
                  
               }
                if(ar[i+1][j]=='o'&&i+1<n)
               {
                   cnt++;
                  
               }
               
               
                if(cnt%2==1)
                {
                    f=0;
                    break;
                }
               
           
        }
    }
    
    if(f==1)
    cout<<"YES";
    
    else
    cout<<"NO";
    
    
}   