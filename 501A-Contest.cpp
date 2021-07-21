#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//Codeforces Round #160 (Div. 2), problem: A. Roma and Lucky Numbers
int main()

{
 
int a,b,c,d;

cin>>a>>b>>c>>d; //a are points of vasya and b are points of misha
int mish,vas;

mish=max(3*a/10,a-a/250*c);
vas=max(3*b/10,b-b/250*d);

if(vas>mish)
cout<<"Vasya";

else if(mish>vas)
cout<<"Misha";

else
cout<<"Tie";


}

