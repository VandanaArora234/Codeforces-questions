#include <iostream>
#include <bits/stdc++.h> 
#define ll long long
using namespace std;

//Codeforces Round #252 (Div. 2), problem:A. Valera and Antique Items
int main(){
 int n;
 ll int r;
 cin>>n>>r; //n are num of sellers and r is valera money
vector<int>v;  //this array will store the ans

 for(int i=0;i<n;i++)
 {
     int t=0;
     cin>>t; //store the items the seller has
      int temp=0; //take a temp variable so that once you check a price is less than valerina's money, you do not push the value again
     for(int j=0;j<t;j++)
     {
         ll int t1=0;
         cin>>t1; //the price of item
        
        if(t1<r&&temp==0){  //if price is less than valera's money and this condition hasn't been checked before 
            v.push_back(i+1); //then push back the seller number that was stored before into ans array
            temp=1; //and update the value of temp so that same seller is not pushed in ans array again
         }
        
     }
     
   
 }
  cout<<v.size()<<endl;
     sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++)
     {
         cout<<v[i]<<" ";
     }
}
