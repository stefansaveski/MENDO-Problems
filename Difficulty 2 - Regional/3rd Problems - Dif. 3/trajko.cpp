//https://mendo.mk/Task.do?id=12
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include<cstring>
using namespace std;
#define LL long long
#pragma GCC target("avx2")
#pragma GCC optimization("O2")
#pragma GCC optimization("unroll-loops")
int main() { ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
string zbor;
LL int pari=1,d=0,t=0,m=0;
cin>>zbor;
for(int i=0;i<zbor.size();i++){
if(zbor[i]=='d'||zbor[i]=='D'){
      pari*=2; i+=4; d+=1; continue;
    }
    if(zbor[i]=='t'||zbor[i]=='T'){
      pari*=3; i+=7; t+=1; continue;
    }
      if(zbor[i]=='m'||zbor[i]=='M'){
        pari-=1;i+=4; m+=1; continue;
        }
      }
  cout<<pari;
}