//https://mendo.mk/Task.do?id=847
#include <iostream>
using namespace std;
 
int main()
{
   int visina, d, n, br=0, height=0;
   cin >> visina >> d >> n;
 
   while(height <= visina)
   {
     height += d;
     br += 1;
     if(height >= visina)
      break;
     height -= n;
   }
   cout << br;
}