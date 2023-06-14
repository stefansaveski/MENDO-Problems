//https://mendo.mk/Task.do?id=910
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int broj, brojac=1;
    cin >> broj;
    string num = to_string(broj);
    for(int i=0; i<num.length(); i++){
        if(num[i] == num[i+1]){
            brojac++;
            if(num[i+1] != num[i+2]){
                cout << brojac << num[i];
                brojac = 1;
            }
        }
        else{
            if(num[i-1] != num[i])
                cout << "1" << num[i];
        }
             
    }
     
    return 0;
}