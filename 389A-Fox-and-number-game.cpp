#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <cmath>
#include <algorithm>
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//Codeforces Round #228 (Div. 2), problem: A. Fox and Number Game
int main()

{
    
    int n,g;
  cin>>n>>g;//take value of n and then first input value of given numbers

for(int i=1;i<n;i++)
{
    int t;
    cin>>t; 
  g=__gcd(g,t);  //find the gcd of all the nums using a for loop.
}
cout<<n*g<<endl; // For minimal sum, the end ans we will get is the gcd of all nums*n 
                 //as after minusing all the nums according to given condition t(i)>t(j),
                 //the end ans for all values will be the gcd

}