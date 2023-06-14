//https://mendo.mk/Task.do?id=712
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
 
  int n, x, y, v;
  cin >> n >> x >> y >> v;
  int tip1[n][n];
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if( i % 2 == 0){
        if( j % 2 == 0)
          tip1[i][j] = 0;
        else
          tip1[i][j] = 1;
      }
      else{
        if( j % 2 == 0)
          tip1[i][j] = 1;
        else
          tip1[i][j] = 0;
      }
    }
  }
  int tip2[n][n] = {0};
  int cnt = n;
  for(int i=0; i<n; i++){
    for(int j=0; j<cnt; j++){
      tip2[i][j] = 1;
    }
    cnt--;
  }
 
  if(tip1[x][y] == v && tip2[x][y] == v){
    cout << "3";
  }
  else if(tip2[x][y] == v)
    cout << "2";
  else if(tip1[x][y] == v)
    cout << "1";
  else
    cout << "4";
 
 
  return 0;
}