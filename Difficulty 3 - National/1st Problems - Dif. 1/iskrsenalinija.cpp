//https://mendo.mk/Task.do?id=798
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
  int niza[4];
  cin >> niza[0] >> niza[1] >> niza[2] >> niza[3];
  sort(niza, niza+4);
  if(niza[0] == niza[1] && niza[2] == niza[3]){
    cout << niza[3]*niza[1];
  }
  else if(niza[3] == niza[2]){
    cout << niza[3]*niza[0];
  }
  else{
    cout << niza[2]*niza[0];
  }
 
}