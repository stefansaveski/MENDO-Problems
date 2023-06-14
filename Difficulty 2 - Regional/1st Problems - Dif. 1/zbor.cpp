//https://mendo.mk/Task.do?id=10
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string zbor;
    int neighbors = 0;
    cin >> zbor;
    for(int i=0; i<(zbor.length()-1); i++){
        if(zbor[i] != 'a' && zbor[i] != 'e' && zbor[i] != 'i' && zbor[i] != 'o' && zbor[i] != 'u'){
            if(zbor[i+1] != 'a' && zbor[i+1] != 'e' && zbor[i+1] != 'i' && zbor[i+1] != 'o' && zbor[i+1] != 'u'){
                neighbors++;
            }
        }
    }
    cout << neighbors;
    return 0;
}