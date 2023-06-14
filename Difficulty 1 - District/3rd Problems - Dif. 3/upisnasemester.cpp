//https://mendo.mk/Task.do?id=952
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#include <ctime>
#include <cstdlib>
int main(){ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int min=10000, pos, n, num;
 
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> num;
    if(num < min){
      min = num;
      pos = i;
    }
  }
  cout << pos+1 << " " << min;
 
}