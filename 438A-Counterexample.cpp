#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define pb push_back;
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//  Codeforces Round #275 (Div. 2), problem: A.Counterexample
int main(){
 
 ll int l,r;

 
 cin>>l>>r;
 
 
 if(l%2!=0)
 {
     l++;
 }
 
 if(r-l>=2)
 {
     cout<<l<<" "<<l+1<<" "<<l+2;
 }
 
 else{
     cout<<-1;
 }

 
 
 
}
