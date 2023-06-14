//https://mendo.mk/Task.do?id=285
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, sum=0, avrg, steps=0;
    cin >> n;
    int niza[n];
    for(int i=0; i<n; i++){
        cin >> niza[i];
        sum += niza[i];
    }
    sort(niza, niza+n);
    if(sum % n != 0){
        cout << "GRESHKA";
        return 0;
    }
    else{
        avrg = sum/n;
    }
    for(int i=n-1; i>=0; i--){
        if(niza[i] > avrg){
            steps += niza[i]-avrg;
        }
    }
    cout << steps;
}