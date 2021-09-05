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
 
ll solve(ll num) {
    return (num * (num-1))/2;
}

 // Codeforces Round #273 (Div. 2): B. Random Teams

int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
 ll n, m;
	cin >> n >> m;
	
	ll r = n%m;
	ll a = n/m;
	ll val1 = solve(a+1)*r;
	ll mn = solve(a)*(m-r) + val1;
	
	ll y = n - m + 1;
	ll mx = solve(y);
	
	cout << mn << " " << mx;
   
}