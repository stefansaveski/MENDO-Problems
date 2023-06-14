//https://mendo.mk/Task.do?id=897
#include <iostream>
  
using namespace std;
  
int main()
{
  int pari, cena1, cena2, pari2, gift1, gift2, leftover=0;
  cin >> pari >> cena1 >> pari2 >> cena2;
  gift1 = pari/cena1;
  leftover = pari - (gift1 * cena1);
  gift2 = (gift1 * pari2 + leftover)/cena2;
  //cout << gift1 << " " << gift2 << endl;
  if(gift2 > gift1)
    cout << "DA";
  else
    cout << "NE ";
}