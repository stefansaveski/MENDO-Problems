//https://mendo.mk/Task.do?id=783
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
  int num, count=0, broj;
  vector<int> niza;
  for(int i=0; i<7; i++){
    cin >> broj;
    niza.push_back(broj);
  }
  for(int i=0; i<30; i++){
    cin >> num;
    for(int j=0; j<niza.size(); j++){
      if(num == niza[j]){
        niza.erase(niza.begin() + j);
        count++;
        break;
      }
    }
  }
  if(count == 7){
    cout << "DA";
  }
  else{
    cout << "NE";
  }
 
}