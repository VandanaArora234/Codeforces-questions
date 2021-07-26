#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <cmath>
#include <algorithm>
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//Codeforces Round #138 (Div. 2), problem: A. Parallelepiped


int main()

{
   int a,b,c;
   cin>>a>>b>>c;
  
   
   int a1,a2,a3;
   
   a1=sqrt((a*c)/b);
   a2=sqrt((a*b)/c);
   a3=sqrt((b*c)/a);
   
   cout<<4*(a1+a2+a3)<<endl;

}