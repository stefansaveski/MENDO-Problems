//https://mendo.mk/Task.do?id=464
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
vector<int> v;int a,badcall=0,brojac=0;
for(int i=0;a!=3;i++){
  cin>>a;
  v.push_back(a);
  if(a==1){
    if(badcall==0){
      brojac+=1;
    }
  }
  if(a==2) badcall=2;
}
brojac-=1;
cout<<v.size()/brojac<<" "<<brojac;
}