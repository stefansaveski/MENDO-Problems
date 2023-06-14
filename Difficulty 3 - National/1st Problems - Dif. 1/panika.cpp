//https://mendo.mk/Task.do?id=908
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#include <ctime>
#include <cstdlib>
int main(){ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int cas, min, sec;
  int min1, sec1;
  cin >> cas >> min >> sec >> min1 >> sec1;
  if(sec + sec1 >= 60){
    min+=1;
    sec = (sec + sec1) - 60;
  }
  else{
    sec = sec + sec1;
  }
  if(min + min1 >= 60){
    cas+=1;
    min = (min + min1) - 60;
  }
  else{
    min = min + min1;
  }
  cout << cas << " " << min << " " << sec;
}