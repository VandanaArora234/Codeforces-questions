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
 
 
 
// Codeforces Beta Round #82 (Div. 2), problem: A. Card Game
 
 
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      
      map<char,int>m;
      m.insert({'6',1});
      m.insert({'7',2});
      m.insert({'8',3});
      m.insert({'9',4});
      m.insert({'T',5});
      m.insert({'J',6});
      m.insert({'Q',7});
      m.insert({'K',8});
      m.insert({'A',9});
      
    char trmp;
    string cd1,cd2;
    cin>>trmp;
    cin>>cd1>>cd2;
    
    if(cd1[1]==trmp&&cd2[1]!=trmp)
    {
        cout<<"YES";
    }
    
    else if(cd1[1]==cd2[1]&&m[cd1[0]]>m[cd2[0]])
    {
        cout<<"YES";
    }
    
    else
    cout<<"NO";
    
 
}