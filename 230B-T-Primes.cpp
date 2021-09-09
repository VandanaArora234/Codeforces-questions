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
 

 // Codeforces Round #142 (Div. 2): B. T-primes

int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
   ll n;
	cin >> n;
	vector<ll> vec(n);
	for(int i=0; i<n; i++) 
	    cin >> vec[i];
	
	ll num = 1000000;
    bool prime[num + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= num; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= num; i += p)
                prime[i] = false;
        }
    }
    
	
	for(int i=0; i<n; i++) {
	    ll val = sqrt(vec[i]);
	    
	    if(val == 1)
	        cout << "NO" << endl;
	    else if(val*val == vec[i] and prime[val])
	        cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
    
	return 0;
    
}