//https://mendo.mk/Task.do?id=980
#include <iostream>
  
using namespace std;
  
int main()
{
  
    double n;
    double pos = 0, res = 0;
    cin >> n;
    while(true){
        res += 2;
        if(pos == n){
            cout << res;
            return 0;
        }
        res += 1;
        pos += 0.5;
        if(pos == n){
            cout << res;
            return 0;
        }
        res += 1;
        pos += 0.5;
        if(pos == n){
            cout << res;
            return 0;
        }
        res += 1;
        pos += 0.5;
        if(pos == n){
            cout << res;
            return 0;
        }
        res += 2;
        pos -= 0.5;
    }
  
    return 0;
}