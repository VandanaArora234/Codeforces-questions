#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
// #define pb push_back;
#define asort(a) sort(a,a+n)
#define dsort(a) sort(a,a+n,greater<int>())
using namespace std;


//Codeforces Round #237 (Div. 2), problem: A. Valera and X
int main()
{
 
 int n=0;
  cin>>n;
char mat[n][n];

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    cin>>mat[i][j];
}
int f=0;
char d=mat[0][0];
char nd=mat[0][1];

if(d==nd)
{
    cout<<"NO";
}
else{
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(j==i||j==n-i-1)  
        {
            if(mat[i][j]!=d)
            {
                f=1;break;
            }
        }
        
        else{
            if(mat[i][j]!=nd)
            {
                f=1;break;
            }
        }
    }
}
if(f==1)
cout<<"NO";

else
cout<<"YES";

}
}
