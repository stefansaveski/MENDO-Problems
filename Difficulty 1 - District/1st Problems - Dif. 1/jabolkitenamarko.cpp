//https://mendo.mk/Task.do?id=846
#include <iostream>
 
using namespace std;
 
int main()
{
    int n,denari=0;
    cin >> n;
    while(n % 4 != 0){
        n++;
        denari += 9;
    }
    cout << denari;
    return 0;
}