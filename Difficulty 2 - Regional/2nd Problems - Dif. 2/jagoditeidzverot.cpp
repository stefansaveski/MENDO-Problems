//https://mendo.mk/Task.do?id=788
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int req,berry,levels=0;
    cin >> req >> berry;
    while(berry >= req){
        berry = berry - req;
        berry += 3;
        levels++;
    }
    cout << levels;
    return 0;
}