#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;
 
 
//Codeforces Round #734 (Div. 3), problem: (B1)Wonderful Coloring - 1
int main()
 
{
    int t=0;
    cin>>t;
   
 while(t--)
 {
  string st;
  
  cin>>st;
 
  int red=0,green=0,f=0;
  int hash[26]={0};
  int si=st.size();
  
  
  for(int i=0;i<si;i++)
  {
      hash[st[i]-'a']++;
      
      if(hash[st[i]-'a']>1)
      f=1;
  }
  if(si==1)
      cout<<0<<endl;
      
  else if(f==0)
  {
    
      cout<<si/2<<endl;
 
  }
  
  else{
      
      for(int i=0;i<26;i++)
      {
          
          if(hash[i]==1)
          {
              if(red<green)
              red++;
              
              else
              green++;
          }
          
          else if(hash[i]>=2){
              red++;green++;
          }
          
      }
      
       
      
      if(si%2==0&&red==green)
      cout<<red<<endl;
      
     
      
      else
      cout<<red<<endl;
  }
 
    
    
 
}
 
}