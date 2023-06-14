//https://mendo.mk/Task.do?id=710
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
  int best = 0, sum = 0, n, max;
  cin >> n >> max;
  int array[n];
  for(int i=0; i<n; i++){
    cin >> array[i];
  }
  int cnt = 0, br=0;
  for(int i=0; i<n; i++){
    sum += array[i];
    br++;
    if(sum > max){
      sum -= array[cnt];
      cnt++;
      br--;
    }
  }
  cout << br;
  return 0;
}