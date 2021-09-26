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
 
 
 //  Codeforces Round #289 (Div. 2, ACM ICPC Rules): A. Maximum in Table
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    
    int a, arr[10][10];
      cin >> a;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0) {
                arr[i][j] = 1;
            } else if (j == 0) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }
    }
    cout << arr[a - 1][a - 1];
 
}