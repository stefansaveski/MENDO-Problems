//https://mendo.mk/Task.do?id=705
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pb push_back
#define mp make_pair
#define ins insert
#define each(a,x) for (auto& a: x)
#define ir(i,a,b) for(int i=a;i<b;i++)
#define dr(i,a,b) for(int i=a;i>=b;i--)
#define f first
#define s second
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int a, b, k;
  cin >> a >> b >> k;
  string num;
  for(int i=a; i<=b; i++){
    num += to_string(i);
  }
  // for(int i=0; i<=b; i++){
  //   cout << num[i];
  // }
  int br = 0;
  for(int i=k-1; i<=num.length(); i+=k){
    //cout << num[i] << " ";
    if(i >= num.length())
      break;
    br++;
  }
  cout << num.length()-br;
  return 0;
}