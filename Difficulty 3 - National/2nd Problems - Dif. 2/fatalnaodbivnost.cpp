//https://mendo.mk/Task.do?id=859
#include <iostream>
  
using namespace std;
  
int main()
{
    int n,moves=0;
    cin >> n;
    int niza[n];
    bool flag = false;
    for(int i=0; i<n; i++){
        cin >> niza[i];
    }
    for(int i=0; i<n; i++){
        if(niza[i] == 1 && niza[i+1] == 2){
            flag = true;
        }
    }
    if(flag == false){
        cout << "0";
        return 0;
    }
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++)
        if(niza[j] == 1 && niza[j+1] == 2){
            int temp = niza[j];
            niza[j] = niza[j+1];
            niza[j+1] = temp;
            moves++;
        }
    }
    cout << moves;
}