//https://mendo.mk/Task.do?id=881
#include <iostream>
 
using namespace std;
int main()
{
 
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if(c < 0 || d < 0)
  {
    cout << "NE";
    return 0;
  }
  if(c != 0 && d != 0)
  {
    if(c <= a && d <= b)
    {
      cout << "DA";
    }
    else
      cout << "NE";
  }
  else
  {
    cout << "NE";
  }
 
  return 0;
}