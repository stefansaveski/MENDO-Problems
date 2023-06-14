//https://mendo.mk/Task.do?id=363
#include <iostream>
#include <string>
 
using namespace std;
 
int
main ()
{
  int nula = 0, eden = 0, dva = 0, tri = 0, cetri = 0, pet = 0, sest =
    0, sedum = 0, osum = 0, devet = 0;
 
  int a, b;
 
  cin >> a >> b;
 
  for (int i = a; i <= b; i++)
    {
      string num = to_string (i);
      for (int i = 0; i < num.length (); i++)
    {
      if (num[i] == '0')
        {
          nula++;
        }
      if (num[i] == '1')
        {
          eden++;
        }
      if (num[i] == '2')
        {
          dva++;
        }
      if (num[i] == '3')
        {
          tri++;
        }
      if (num[i] == '4')
        {
          cetri++;
        }
      if (num[i] == '5')
        {
          pet++;
        }
      if (num[i] == '6')
        {
          sest++;
        }
      if (num[i] == '7')
        {
          sedum++;
        }
      if (num[i] == '8')
        {
          osum++;
        }
      if (num[i] == '9')
        {
          devet++;
        }
    }
    }
  cout << nula << " " << eden << " " << dva << " " << tri << " " << cetri <<
    " " << pet << " " << sest << " " << sedum << " " << osum << " " << devet;
  return 0;
}