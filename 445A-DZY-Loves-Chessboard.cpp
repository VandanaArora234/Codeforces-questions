#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <cmath>
#include <algorithm>
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;
 
 
// Codeforces Round #254 (Div. 2), problem: A. DZY Loves Chessboard
 
 
int main()
 
{
int n,m;
cin>>n>>m;
 
char ar[n][m];
 
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
cin>>ar[i][j];
 
 
bool wcnt=true,bcnt=false;
 
 if(m%2==0){
    for(int i=0;i<n;i++)
    {
        
        
        for(int j=0;j<m;j++)
        {
            if(ar[i][j]=='-')
            {
                 if(wcnt)
        {
            wcnt=false; 
            bcnt=true;
        }
        
        else if(bcnt)
        {
            bcnt=false;wcnt=true;
        }
                 continue;
            }
           
            
            else if(ar[i][j]=='.'){
            if(wcnt)
            {
                ar[i][j]='W';
                wcnt=false;
                bcnt=true;
            }
            else if(bcnt)
            {
                ar[i][j]='B';
                wcnt=true;
                bcnt=false;
            }
            
            }
        }
        
        
        if(wcnt)
        {
            wcnt=false; 
            bcnt=true;
        }
        
        else if(bcnt)
        {
            bcnt=false;wcnt=true;
        }
        
        
}
}
       
       
       else{
            for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<m;j++)
        {
            if(ar[i][j]=='-')
            {
                 if(wcnt)
        {
            wcnt=false; 
            bcnt=true;
        }
        
        else if(bcnt)
        {
            bcnt=false;wcnt=true;
        }
                 continue;
            }
            
            else if(ar[i][j]=='.'){
            if(wcnt)
            {
                ar[i][j]='W';
                wcnt=false;
                bcnt=true;
            }
            else if(bcnt)
            {
                ar[i][j]='B';
                wcnt=true;
                bcnt=false;
            }
            
            }
        }
        
    }
       }
 
 
      
 
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cout<<ar[i][j];
}
cout<<endl;
}
 
}