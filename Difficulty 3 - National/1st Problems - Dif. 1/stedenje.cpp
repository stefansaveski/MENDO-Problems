//https://mendo.mk/Task.do?id=858
#include <bits/stdc++.h>
 
using namespace std;
#pragma GCC target("avx2")
#pragma GCC optimization("O2")
#pragma GCC optimization("unroll-loops")
 
int main()
{
  int kire, pari1, pari2, mete=0, br=0;
 
  cin >> kire >> pari1 >> pari2;
 
  if(pari1 == pari2)
  {
    cout << "NE";
    return 0;
  }
  while(kire > mete)
  {
    kire += pari1;
    mete += pari2;
    if(kire >= mete)
    {
      br++;
    }
    else if(mete > kire)
    {
      cout << "NE";
      return 0;
    }
 
  }
  cout << br;
}