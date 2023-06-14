//https://mendo.mk/Task.do?id=848
#include <iostream>
 
using namespace std;
 
int main()
{
    int n,zbirZ=0,zbirM=0;
    cin >> n;
    int zelki[n],morkovi[n];
    for(int i=0; i<n; i++){
        cin >> zelki[i] >> morkovi[i];
        zbirZ += zelki[i];
        zbirM += morkovi[i];
    }
    if(zbirZ > zbirM){
        cout << "zelka" << endl;
        cout << zbirZ;
    }
    else{
        cout << "morkov" << endl;
        cout << zbirM;
    }
    return 0;
}