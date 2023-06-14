//https://mendo.mk/Task.do?id=896
#include <iostream>
 
using namespace std;
 
int main()
{
  int money, gift1, gift2, sum1, sum2;
  cin >> money >> gift1 >> gift2;
  if(gift1 != 0 || gift2 != 0)
  {
    sum1 = money/gift1;
    sum2 = money/gift2;
    cout << sum2 - sum1;
  }
  else
    cout << "0";
 
}