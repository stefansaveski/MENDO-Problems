//https://mendo.mk/Task.do?id=961
#include <bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
using namespace std;
 
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
  string num;
  cin >> num;
  bool flag = false;
  if(num[1] == '0' || num[2] == '0')
    flag = true;
  if(num[0] != num[1] && num[0] != num[2] && num[1] != num[2] && flag != true){
    cout << "6";
    return 0;
  }
  else if(num[0] != num[1] && num[0] != num[2] && num[1] != num[2] && flag){
    cout << "4";
    return 0;
  }
  else if(num[0] == num[1] && num[0] == num[2]){
    cout << "1";
    return 0;
  }
  else if(flag != true){
    if(num[0] == num[1] || num[0] == num[2] || num[1] == num[2])
      cout << "3";
  }
  else if(num[1] == '0' && num[2] != '0'){
    cout << "2";
  }
  else if(num[2] == '0' && num[1] != '0'){
    cout << "2";
  }
  else{
    cout << '1';
  }
 
}