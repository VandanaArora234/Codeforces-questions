#include <iostream>
#define ll long long;
using namespace std;

//Codeforces Beta Round #97 (Div. 2), problem: (A) Presents

int main()

{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int ar[n];
    
    for(int i=1;i<=n;i++)
    {
        ar[arr[i]]=i;
    }
    
 for(int i=1;i<=n;i++){
     cout<<ar[i]<<" ";
 }
  
  
}   

