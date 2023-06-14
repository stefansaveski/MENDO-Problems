//https://mendo.mk/Task.do?id=113
#include <bits/stdc++.h>
#include <string>
using namespace std;
#pragma GCC target("avx2")
#pragma GCC optimization("O2")
#pragma GCC optimization("unroll-loops")
 
int main()
{
  string word;
  cin >> word;
  for(int i=0; i<word.length(); i++)
  {
    if(isdigit(word[i]))
    {
      char bruh = word[i];
      int len = (int)bruh - 48;
      for(int j=0; j<len-1; j++)
      {
        cout << word[i+1];
      }
 
    }
    else
    {
      cout << word[i];
    }
 
  }
}