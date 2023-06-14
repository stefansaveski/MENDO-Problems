//https://mendo.mk/Task.do?id=532
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
  int a,b,c, res=0, sum=0;
  cin >> a >> b >> c;
  sum = a+b+c;
  while(sum % 3 != 0){
    sum++;
    res++;
  }
  cout << res;
  return 0;
}