#include <bits/stdc++.h> 
 
using namespace std;
 //Codeforces Round #142 (Div. 2), problem: (A) Dragons
 
int main()
{
 
int s,n;
cin>>s>>n;
 
vector<pair<int,int> >m;
 
 
for(int i=0;i<n;i++)
{
   int t1,t2;
   cin>>t1>>t2;
   
 m.push_back(make_pair(t1,t2));
}
 
sort(m.begin(),m.end());
 
int f=0;
for(auto i: m){
    
     
       if(i.first<s){
        s+=i.second;
      
    }
    
   else
    {
        f=1;
        break;
    }
 
}
 
if(f==0)
cout<<"YES";
 
else
cout<<"NO";
 
}
