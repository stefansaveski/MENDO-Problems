//https://mendo.mk/Task.do?id=533
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
  int strajk, nedeli;
  cin >> strajk;
  if(strajk == 26){
    cout << "3";
    return 0;
  }
  nedeli = strajk/5;
  int remains = 18 - nedeli;
  if(strajk > remains){
    if(strajk-remains <= 6)
      cout << "1";
    else{
      if((strajk-remains) % 6 > 0)
        cout << (strajk-remains)/7 + 1;
      else
        cout << (strajk-remains)/7 + 1;
    }
  }
  else
    cout << "0";
}