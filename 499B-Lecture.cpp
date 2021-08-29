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
 

 // Codeforces Round #284 (Div. 2): B. Lecture
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 

  int n, m;
    cin >> n >> m;
    
    unordered_map<string, string> mp;
    for(int i=0; i<m; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        mp[s1] = s2;
    }
    
    for(int i=0; i<n; i++) {
        string s3;
        cin >> s3;
        
        string s4 = mp[s3];
        
        if(s3.size() <= s4.size())
            cout << s3 << " ";
        else cout << s4 << " ";
    }
  
  

}