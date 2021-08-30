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
 

 // Codeforces Round #248 (Div. 2): A. Cupboards
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
 
    int n;
    cin>>n;
    int right=0;
    int left=0;
for(int i=0;i<n;i++){
	int x=0,y=0;
	cin>>x>>y;
	if(x)++left;
	if(y)++right;
}
int offRi=n-right;
int offLe=n-left;
int a=min(offRi,right);
int b=min(offLe,left);


cout<<a+b<<endl;
  

}