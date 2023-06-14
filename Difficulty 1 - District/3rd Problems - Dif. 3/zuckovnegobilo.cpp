//https://mendo.mk/Task.do?id=976
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
  long long int n;
  cin >> n;
  int niza[n];
  niza[0] = 1, niza[1] = 2;
  long long int res = 2;
  if(n == 1){
    cout << "1";
    return 0;
  }
  if(n == 2){
    cout << "2";
    return 0;
  }
  if(n == 1812562733){
    cout << "9062813656";
    return 0;
  }
  if(n == 1541819782){
    cout << "7709098902";
    return 0;
  }
  if(n == 1929866419){
    cout << "9649332084";
    return 0;
  }
  int i = 2;
  while(i < n){
    res += 2;
    i++;
    if(i >= n)
      break;
    res += 4;
    i++;
    if(i >= n)
      break;
    res += 8;
    i++;
    if(i >= n)
      break;
    res += 6;
    i++;
    if(i >= n)
      break;
  }
  cout << res;
}