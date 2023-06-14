//https://mendo.mk/Task.do?id=981
#include <iostream>
 
using namespace std;
 
int main()
{
 
    int n[4];
    cin >> n[0] >> n[1] >> n[2] >> n[3];
    int res = 0;
    for(int i=0; i<4; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            if(j != i){
              sum += n[j];
              //cout << n[j] << " ";
            }
 
        }
        //cout << endl;// << sum << " ";
        if(sum%2 == 0){
            res++;
        }
    }
    if(res == 0)
        cout << "-";
    else if(res == 1)
        cout << "+";
    else
        cout << "?";
    return 0;
}