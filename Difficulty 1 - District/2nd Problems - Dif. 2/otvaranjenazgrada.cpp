//https://mendo.mk/Task.do?id=951
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#include <ctime>
#include <cstdlib>
int main(){ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  double num, percent;
  cin >> num >> percent;
  double result = num / 100 * percent;
 
  if(result - (int) result > 0){
    cout << (int) result;
  }
  else{
    cout << result-1;
  }
 
 
}