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
 
 
 //  Codeforces Round #223 (Div. 2): A. Sereja and Dima
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int r=n-1;
int l=0;
int sscore=0;
int dscore=0;
for(int i=0;i<n;i++){
	if(i%2==0){
		if(arr[r]>arr[l])
		{
			sscore+=arr[r];
			--r;
		}
		else if(arr[r]<arr[l]){
		 sscore+=arr[l];
			++l;
		}
		else{
		sscore+=arr[l];	
		}
	}
	else{
		if(arr[r]>arr[l])
		{
			dscore+=arr[r];
			--r;
		}
		else if(arr[r]<arr[l]){
		 dscore+=arr[l];
			++l;
		}
			else{
		dscore+=arr[l];	
		}
		}
}
cout<<sscore<<" "<<dscore;
	return 0;
 
}