#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <cmath>
#include <algorithm>
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
#define f1 ios_base::sync_with_stdio(false);
#define f2 cin.tie(NULL);
using namespace std;
 
 
 
//  Codeforces Round #105 (Div. 2): A. Insomnia cure
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      
  int k,l,m,n,d;
  
  cin>>k>>l>>m>>n>>d;
  int cnt=d;
  
  if(k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d << endl;
    }
    
    else{
    for(int i=1;i<=d;i++)
    {
        if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
        cnt--;
    }
    cout<<cnt;
    }
  
}