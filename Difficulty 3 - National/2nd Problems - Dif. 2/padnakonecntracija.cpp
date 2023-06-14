//https://mendo.mk/Task.do?id=909
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#include <ctime>
#include <cstdlib>
int main(){ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int n, m, num, result=0, brojac = 1;
  cin >> n >> m;
  for(int i=n; i<m; i++){
    if(i % 3 == 0){
      result += 1;
    }
    if(i % 3 == 1){
      result += 2;
    }
    if(i % 3 == 2){
      result += 3;
    }
  }
 
  cout << result;
}