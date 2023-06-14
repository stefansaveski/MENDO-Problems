//https://mendo.mk/Task.do?id=467
#include <iostream>
using namespace std;
int main(){
 
    int n, zbir=0, poeni=0;
    cin >> n;
    for(int i=1; i<= 100000000; i++)
    {
        if(zbir == n)
        {
            cout << poeni;
            return 0;
        }
        zbir+=i;
        poeni++;
    }
}