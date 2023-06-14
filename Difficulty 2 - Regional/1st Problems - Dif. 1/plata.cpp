//https://mendo.mk/Task.do?id=269
#include <bits/stdc++.h>
 
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
 
int main(){ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
  int a,b,c, x;
  cin >> a >> b >> c;
 
  if(b-a == c-b)
  {
    x = b-a;
    cout << c + x;
  }
  else if(b/a == c/b)
  {
    x = b/a;
    cout << c * x;
  }
 
 
 
}