//https://mendo.mk/Task.do?id=40
#include <iostream>
 
using namespace std;
 
int main() {
   int cas1, min1, cas2, min2, truecas = 0, truemin = 0;
   cin >> cas1 >> min1 >> cas2 >> min2;
   if (cas1 > cas2 || cas1 == cas2 && min2 < min1)
   {
      truecas = (1440 - (cas1 * 60 + min1)) + (cas2 * 60 + min2);
      if (truecas < 60) {
         cout << "00:" << truecas;
      }
      if (truecas == 60)
         cout << "01:00";
         else {
            if (truecas / 60 > 9)
               cout << truecas / 60 << ":";
            if (truecas / 60 <= 9)
               cout << "0" << truecas / 60 << ":";
            if((truecas % 60) <= 9)
               cout << "0" << truecas%60;
            else
               cout << truecas%60;
         }
   }
   if (cas2 > cas1) {
      truecas = (cas2 * 60 + min2) - (cas1 * 60 + min1);
      if (truecas < 60) {
         cout << "00:" << truecas;
      }
      if (truecas == 60)
         cout << "01:00";
      else {
         if (truecas / 60 > 9)
            cout << truecas / 60 << ":";
         if (truecas / 60 <= 9)
            cout << "0" << truecas / 60 << ":";
         if((truecas % 60) <= 9)
            cout << "0" << truecas%60;
         else
            cout << truecas%60;
      }
 
   }
   if(cas1 == cas2 && min1 == min2)
   {
     cout << "00:00";
     return 0;
   }
   if(cas1 == cas2 && min2 > min1)
   {
     if(min1+min2 <= 9)
      cout << "00:0" << min2-min1;
     else
      cout << "00:" << min2-min1;
   }
 
 
}