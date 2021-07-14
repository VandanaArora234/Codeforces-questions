#include <bits/stdc++.h> 
 
using namespace std;
 
 
int main()
{
 int t=0;
    cin>>t;
   
    while(t--)
    {
   string s;
   cin>>s;
   int ap=-1;
   for(int i=0;i<s.size();i++)
   {
   int temp=s[i];
   if(s[i]==97){
        ap=i;
        break;
   }
   }
   if(ap==-1)
   cout<<"NO"<<endl;
   
   else if(s.length()==1)
   cout<<"YES"<<endl;
  
else if(s.length()==2)
{
    int temp=0;
    
    if(ap==0)
    temp=s[ap+1];
    
    else
    temp=s[ap-1];
    
    if(temp==98)
    cout<<"YES"<<endl;
    
    else
    cout<<"NO"<<endl;
}
   
   else{
        int count = 1, cnt=97;
       int i=ap-1,j=ap+1; //i=-1 j=1
       
    //   if(ap==s.size()){
    //       i=ap-1,j=ap+1;
    //   }
    //     else if(ap==0){
    //       i=-1,j=ap+1;
    //   }
       int flag=1;
       while(count < s.size()) //3
       {
        
           int temp=s[i];
           int temp1=s[j];
           
           if( temp==cnt+1){
               i--;
               count++;
           }
           else if(temp1==cnt+1)
           {
               j++;
               count++;
           }
           
           else{
               flag=0;
               break;
           }
           
           cnt++;

       }
       
       if(flag==1)
       cout<<"YES"<<endl;
       
       else
       cout<<"NO"<<endl;
   }
   
   
   
   
   
   
    }
}