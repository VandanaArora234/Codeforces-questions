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
 
 
 //  Codeforces Round #223 (Div. 2): B. Drinks
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
int n;
cin>>n;

double ad = 0;
double arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
	ad += (arr[i]/100);
}

cout<<((ad/n)*100)<<endl;
 
}