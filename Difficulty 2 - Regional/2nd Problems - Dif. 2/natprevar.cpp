//https://mendo.mk/Task.do?id=853
#include <iostream>
  
using namespace std;
  
int main()
{
    int pari,cena=0,temp;
    cin >> pari;
    if(pari % 7 == 0){
        cout << "DA";
        return 0;
    }
    if(pari % 4 == 0){
        cout << "DA";
        return 0;
    }
    while(cena != pari){
        cena += 7;
        temp = pari-cena;
        if(temp < 0){
            cout << "NE";
            return 0;
        }
        if(temp % 4 == 0){
            cout << "DA";
            return 0;
        }
    }
    return 0;
}