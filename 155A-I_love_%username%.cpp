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
 

 //Codeforces Round #109 (Div. 2): A. I_love_%username%
 int solve(int num) {
    int count=0;
    while(num) {
        num = num&num-1;
        count++;
    }
    return count;
}
 
int main()
 
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
     int n, points;
    cin >> n >> points;
    int min(points), max(points), amazing(0);
    while (--n)
    {
        cin >> points;
        if (points < min)
        {
            min = points;
            ++amazing;
        }
        if (points > max)
        {
            max = points;
            ++amazing;
        }
    }
    cout << amazing << endl;
    return 0;
  

}