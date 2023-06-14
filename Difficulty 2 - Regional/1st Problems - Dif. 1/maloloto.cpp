//https://mendo.mk/Task.do?id=882
#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
  int niza[5], sum=0;
  for(int i=0; i<5; i++)
  {
    cin >> niza[i];
  }
  sort(niza, niza+5);
  sum = (niza[4] * 100) + (niza[3] * 10) + niza[2];
  cout << sum << " " << sum*2;
}