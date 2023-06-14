//https://mendo.mk/Task.do?id=898
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
  int n, L;
  cin >> n >> L;
  int start = 0;
  int end = L;
  int res = 0;
  for(int i=0; i<n; i++){
    int a, b;
    cin >> a >> b;
    if(a >= start && b <= end){
      res++;
      continue;
    }
    else if(a < start && b > end || a > end && b > end || a < start && b < start)
      continue;
    else if(a <= start && b <= end){
      int difleft = abs(start - a); int difright = b - start;
      if(difleft <= difright){
        res++;
        start = a;
      }
      continue;
    }
    else if(a >= start && b > end){
      int difleft = abs(end - a); int difright = abs(b - end);
      if(difright <= difleft){
        res++;
        end = b;
      }
      continue;
    }
  }
  cout << res;
}