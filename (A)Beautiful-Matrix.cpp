#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
using namespace std;

//Codeforces Round #161 (Div. 2), problem: (A) Beautiful Matrix

int main()

{
    int mat[5][5];
    int r=0,c=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                r=i+1;
                c=j+1;
                
            }
        }
    }
  
  cout<<abs(r-3)+abs(c-3);
}   

