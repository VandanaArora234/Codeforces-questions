#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//Codeforces Round #162 (Div. 2), problem: A. Colorful Stones (Simplified Edition)
int main()

{
 
string s,t;
cin>>s>>t;
int i=0,j=0;
while(j<t.size())
{
    if(s[i]==t[j])
    {
        i++;j++;
    }
    else{
        j++;
    }
}
cout<<i+1;

}

