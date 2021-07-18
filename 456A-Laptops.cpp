#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
using namespace std;

//Codeforces Round #260 (Div. 2), problem: (A) Laptops
int main(){
    
    int n;
    vector<pair<int,int> > v;
    int cnt=0;
  
  cin>>n;
  for(int i=0;i<n;i++)
  {
      int a,b;
      cin>>a>>b; //a price and b quality
      
      if(b>a)
      cnt++;
      
      v.push_back(make_pair(a,b));
  }
  
  if(cnt>0)
  cout<<"Happy Alex";
  
  else
  cout<<"Poor Alex";
}
