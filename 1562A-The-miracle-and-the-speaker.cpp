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
 

 // Codeforces Round #741 (Div. 2): A. The Miracle and the Sleeper
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 

  
    ll t;
    cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        ll res = (b/2)+1;
        if(res >= a)
            cout << b%res << endl;
        else cout << b%a << endl;
    }
    return 0;

}