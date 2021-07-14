#include <iostream>
#define ll long long
using namespace std;

// Codeforces Round #246 (Div. 2), problem: (A) Choosing Teams
int main()

{

    int n,k;
    cin>>n>>k;
    int arr[n];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
        if(arr[i]+k<=5)
        cnt++;
    }
    
    cout<<cnt/3;
   
}   

