//https://mendo.mk/Task.do?id=530
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
  int n, max=0;
  cin >> n;
  int den, mesec;
  int rodendeni[31][12] = {0};
  int results[13] = {0};
  for(int i=0; i<n; i++){
    cin >> den >> mesec;
    if(rodendeni[den-1][mesec-1] == 0){
      rodendeni[den-1][mesec-1] = 1;
      results[mesec] += 1;
    }
  }
  for(int i=1; i<13; i++){
    if(results[i] > max)
      max = results[i];
  }
  for(int i=1; i<13; i++){
    if(results[i] == max)
      cout << i << endl;
  }
  return 0;
}