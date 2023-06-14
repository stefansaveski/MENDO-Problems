//https://mendo.mk/Task.do?id=975
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pb push_back
#define mp make_pair
#define ins insert
#define each(a,x) for (auto& a: x)
#define pq priority_queue
#define f first
#define s second
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#define LL long long
 
int main(){ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  int red, blue;
  cin >> red >> blue;
  int res1 = 0, res2, res3;
  res2 = red; res3 = blue;
  while(red != blue){
    if(red > blue){
      red--;
      blue++;
      res1++;
    }
    if(blue > red){
      blue--;
      red++;
      res1++;
    }
  }
  if(res1 < res2 && res1 < res3)
    cout << res1;
  else if(res2 < res1 && res2 < res3)
    cout << res2;
  else
    cout << res3;
}