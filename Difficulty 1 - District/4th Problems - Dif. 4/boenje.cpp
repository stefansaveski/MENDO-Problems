//https://mendo.mk/Task.do?id=611
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
  int n, m;
  int r=0,y=0,z=0;
  bool redf, yellowf, bluef;
  cin >> n >> m;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(i % 3 == 0){
        if(j % 3 == 0)
          r++;
        else if(j%3 == 1)
          y++;
        else
          z++;
      }
      else if(i % 3 == 1){
        if(j % 3 == 0)
          y++;
        else if(j%3 == 1)
          z++;
        else
          r++;
      }
      else{
        if(j % 3 == 0)
          z++;
        else if(j%3 == 1)
          r++;
        else
          y++;
      }
 
    }
  }
  cout << r << " " << y << " " << z;
}