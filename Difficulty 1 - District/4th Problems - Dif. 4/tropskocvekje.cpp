//https://mendo.mk/Task.do?id=953
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#include <ctime>
#include <cstdlib>
int main(){ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int n, litri, denovi, count=0, result=0, num;
  cin >> n >> litri >> denovi;
  for(int i=0; i<n; i++){
    cin >> num;
    if(num >= litri){
      count++;
      if(count > denovi){
        result++;
      }
    }
    else{
      count = 0;
    }
  }
  cout << result;
 
 
}