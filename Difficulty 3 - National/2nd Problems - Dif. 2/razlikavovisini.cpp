//https://mendo.mk/Task.do?id=962
#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#include <ctime>
#include <cstdlib>
 
int main(){
 
  int num, endMax, endMin;
  int min=9999999, max=0;
  bool flag = false;
  while(num != 11111){
    cin >> num;
 
    if(flag == true && num == 0){
        endMax = max;
        endMin = min;
    }
    if(num == 0 && flag == false){
      flag = true;
    }
    if(flag){
        if(num < min && num != 0)
          min = num;
        if(num > max)
          max = num;
    }
  }
  cout << endMax - endMin;
  return 0;
}