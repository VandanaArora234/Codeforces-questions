#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//Codeforces Round #144 (Div. 2), problem: A. Perfect Permutation
int main()
{
 
int n;
cin>>n;

if(n&1==1)
cout<<-1;

else{
    
    cout<<2<<" "<<1<<" ";
    for(int i=3 ; i<n ; i+=2)
    {
        cout<<i+1<<" "<<i<<" ";
    }
}

}
