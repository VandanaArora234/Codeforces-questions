#include <bits/stdc++.h> 
 
using namespace std;
 
 
//Codeforces Round #186 (Div. 2), problem: (A) Ilya and Bank Account

int main()
{
 long long int n;
 cin>>n;
 
 if(n>0)
 cout<<n;
 
 else                   
 {
    long long int temp=n; 
    long long int t1=abs(temp%10); 
    temp/=10;
    long long int t2=abs(temp%10);
 
 
 if(t1>=t2)
 {
     cout<<n/10;
 }
 
 else{
     string t= to_string(abs(n%10));
     string tt=to_string(abs(n/100));
     tt+=t;
 
     
     int ans=stoi(tt);
     cout<<-ans;
 }
   
    
 }
}