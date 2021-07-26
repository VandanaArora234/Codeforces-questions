#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <cmath>
#include <algorithm>
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//Codeforces Round #278 (Div. 2), problem: (A) Giga Tower

bool containEight(int x)  //to check if 8 is present
{
    
    if(x<0)  //apply this condition when x is negative; Just multiply it with -1
    x*=-1;
    
    while(x>0)
    {
        if(x%10==8)
        return true;
        
        x/=10;
    }
    
    return false;
}

int main()

{
    ll int a=0;
 
    cin>>a;
    int cnt=1;
    for(ll int i=a+1;i<a+16;i++)
    {

        if(containEight(i)==true) //if contains the num 8 break the loop
        break;
        
        cnt++;
        
    }
    
    cout<<cnt<<endl;

}