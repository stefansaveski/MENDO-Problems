//https://mendo.mk/Task.do?id=903
#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimization("O2")
#pragma GCC optimization("unroll-loops")
  
using namespace std;
  
int main()
{
    int godini;
    cin >> godini;
    if(godini == 1)
    {
        cout << "15";
        return 0;
    }
    if(godini == 2)
    {
        cout << "24";
        return 0;
    }
    if(godini == 3)
    {
        cout << "28";
        return 0;
    }
    if(godini == 4)
    {
        cout << "32";
        return 0;
    }
    if(godini == 5)
    {
        cout << "36";
        return 0;
    }
    if(godini == 6)
    {
        cout << "40";
        return 0;
    }
    if(godini > 6)
    {
        cout << 40+(godini-6)*5;
    }
    return 0;
}