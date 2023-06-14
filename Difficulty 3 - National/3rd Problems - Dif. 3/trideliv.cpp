//https://mendo.mk/Task.do?id=860
#include <bits/stdc++.h>
#include <vector>
#include <string>
 
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#include <ctime>
#include <cstdlib>
 
int main(){
 
  string num;
  cin >> num;
  string biggest = "0";
  string ogNum = num;
  int sum = 0, max=0;
  bool flag = false;
  for(int pos=0; pos<num.length(); pos++){
    char original = num[pos];
    for(int i=1; i<=9; i++){
      num[pos] = '0' + i;
      for(int j=0; j<num.length(); j++){
          sum += (int) num[j] - 48;
      }
      if(sum % 3 == 0 && sum > max){
        //cout << num << " " << sum << endl;
        if(num != ogNum){
          if(num > biggest)
            biggest = num;
        }
 
 
      }
      sum = 0;
    }
    num[pos] = original;
    //cout << "--------------------------------------" << endl;
 
  }
  cout << biggest;
 
  return 0;
}