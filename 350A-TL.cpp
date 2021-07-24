#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//Codeforces Round #203 (Div. 2), problem: A. TL
int main()

{
    int n,m;
    cin>>n>>m;
    
    vector<int> v1(n);
    vector<int> v2(m);
    int check=INT_MIN;
    int check1=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
         cin>>v1[i];
         check=max(check,v1[i]);
         check1=min(check1,v1[i]);
         
        
    }
   int last=max(check,check1*2);
   
   int check2=INT_MAX; 
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
        check2=min(check2,v2[i]);
    }
    
  if(last<check2)
  cout<<last;
  
  else
  cout<<-1;
    

}
