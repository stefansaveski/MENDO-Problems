//https://mendo.mk/Task.do?id=877
#include <iostream>
 
using namespace std;
 
int main()
{
    int p, d, n, xp, points=0;
    cin >> p >> d >> n;
    xp = p;
    for (int i = 0; i < n-1; i++)
    {
        points += xp;
        xp += d;
    }
    cout << points;
     
}