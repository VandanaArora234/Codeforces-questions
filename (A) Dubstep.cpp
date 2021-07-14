#include<stdio.h>
#include<conio.h> 
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <bits/stdc++.h> 
 
using namespace std;
 
 //Codeforces Round #130 (Div. 2), problem: (A) Dubstep
 
int main()
{
    

string s="";
string ans="";
 
cin>>s;
int i=0;
while(i<s.size())
{
    
      if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
           
            i=i+3;

        }
    else
    {
    
        
        ans+=s[i];
        
        
        if(s[i+1]=='W'&&s[i+2]=='U'&&s[i+3]=='B')
        {
           
            ans+=" ";
            i=i+4;
         
        }
        else
        i++;
    }
    
}
cout<<ans<<endl;
 
}