//https://mendo.mk/Task.do?id=789
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include<cstring>
using namespace std;
#pragma GCC target("avx2")
#pragma GCC optimization("O2")
#pragma GCC optimization("unroll-loops")
int main() { ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
  int sum=0;
  int n;
  cin >> n;
  for(int i=0; i<n+1; i++)
  {
    for(int j=0; j<n+1; j++)
    {
      sum += j;
    }
    sum += i;
  }
  cout << sum;
}