//https://mendo.mk/Task.do?id=876
#include <iostream>
 
using namespace std;
 
int main()
{
    int P, T;
    cin >> P >> T;
    cout << 10000 - (P * 60 * 2) - (T * 60 *4);
}