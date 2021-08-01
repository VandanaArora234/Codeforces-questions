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



// Codeforces Beta Round #46 (Div. 2), problem: A. Sleuth



int main()

{
 string s;
	getline(cin,s);
	
s.erase(remove(s.begin(), s.end(), ' '), s.end());

int si=s.size()-2;
if(s[si]=='A'||s[si]=='E'||s[si]=='I'||s[si]=='O'||s[si]=='U'||s[si]=='Y'||
s[si]=='a'||s[si]=='e'||s[si]=='i'||s[si]=='o'||s[si]=='u'||s[si]=='u')
cout<<"YES"<<endl;

else
cout<<"NO"<<endl;
	

}
