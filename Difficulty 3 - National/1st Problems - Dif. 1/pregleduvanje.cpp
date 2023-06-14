//https://mendo.mk/Task.do?id=137
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
  int n, k;
  cin >> n >> k;
  int minvreme = n, res = 1;
  for(int i=1; i<=n/2; i++){
    int razgovori = (i*(i-1)/2) * k;
    //cout << razgovori << " ";
    double max = ceil(double(n)/i);
    int vreme = razgovori + max;
    //cout << vreme << endl;
    if(vreme < minvreme){
      minvreme = vreme;
      res = i;
    }
  }
  cout << res;
 
}