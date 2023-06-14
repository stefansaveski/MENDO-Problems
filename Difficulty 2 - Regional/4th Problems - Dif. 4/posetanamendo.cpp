//https://mendo.mk/Task.do?id=905
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
 
    LL int target, n;
    cin >> target >> n;
    LL int a[n], b[n];
    for(LL int i=0; i<n; i++) cin >> a[i];
    LL int freq[100] = {0};
    for(int i=0; i<n; i++){
      cin >> b[i];
      freq[b[i]]++;
    }
    for(int i=99; i>= 0; i--) freq[i-1] += freq[i];
 
    LL int rez = 0;
    for(LL int i=0; i<n; i++){
      if(target - a[i] <= 0)
        rez += n;
      else
        rez += freq[target-a[i]];
    }
    cout << rez;
    return 0;
  }