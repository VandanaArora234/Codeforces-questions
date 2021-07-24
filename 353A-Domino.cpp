#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//Codeforces Round #205 (Div. 2), problem: A. Domino
int main()

{
    int n;
    cin>>n;
    vector<pair<int,int> > v;
    int s1=0,s2=0;
   
    for(int i=0;i<n;i++)
    {
        int t1,t2;
        cin>>t1>>t2;
        v.push_back(make_pair(t1,t2));
        
        s1+=t1;
        s2+=t2;
    }
    

  if(s1%2==0 and s2%2==0)
  cout<<0;
 
 else if((s1%2==0&&s2%2!=0)||(s1%2!=0&&s2%2==0))
cout<<-1;

else{
    int f=0;
    for(int i=0;i<n;i++)
    {
        if((v[i].first%2==0&&v[i].second%2!=0)||(v[i].first%2!=0&&v[i].second%2==0))
        {
              f=1;break;
        }
      
    }
    
    if(f==1)
    {
        cout<<1;
    }

    
    else
    cout<<-1;
}
}
