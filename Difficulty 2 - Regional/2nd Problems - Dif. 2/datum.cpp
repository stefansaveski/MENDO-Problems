//https://mendo.mk/Task.do?id=883
#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
  int n;
  cin >> n;
  if(n <= 24)
  {
    cout << n+7 << ". mart";
  }
  if(n > 24 && n <= 54)
  {
    cout << n-24 << ". april";
  }
  if(n > 54 && n <= 80)
  {
    cout << n-54 << ". maj";
  }
}