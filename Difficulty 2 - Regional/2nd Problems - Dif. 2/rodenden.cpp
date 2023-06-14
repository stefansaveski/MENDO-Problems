//https://mendo.mk/Task.do?id=41
//#include <iostream>
#include <bits/stdc++.h>
//#include <ctime>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
 
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
  string broevi;
  int B[10] = {0}, max = 0;
  cin >> broevi;
  for(int i=0; i<broevi.length(); i++)
  {
      if(broevi[i] == '0' ){ B[0] += 1 ;}
      if(broevi[i] == '1' ){ B[1] += 1 ;}
      if(broevi[i] == '2' ){ B[2] += 1 ;}
      if(broevi[i] == '3' ){ B[3] += 1 ;}
      if(broevi[i] == '4' ){ B[4] += 1 ;}
      if(broevi[i] == '5' ){ B[5] += 1 ;}
      if(broevi[i] == '6' ){ B[6] += 1 ;}
      if(broevi[i] == '7' ){ B[7] += 1 ;}
      if(broevi[i] == '8' ){ B[8] += 1 ;}
      if(broevi[i] == '9' ){ B[9] += 1 ;}
  }
  B[6] += B[9] + 1; B[6] /= 2;
  //cout << B[6];
  for(int i=0; i<9; i++)
  {
    if(B[i] >= max)
      max=B[i];
  }
  cout << max;
  //cout << max;
 
}